### chapter12 使用结构和指针

#### 单链表

如何将一个新节点插入到一个有序的单链表中？

首先看版本一的代码：

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int value;
    struct node *link;
}Node;

int sll_insert(Node *current, int new_value);

int sll_insert(Node *current; int new_value)
{
    Node *previous;
    Node *new_node;
    //首先寻找插入节点的位置
    while (current->value < new_value){
        previous = current;
        current = current->link;
    }
    //为新节点分配内存
    new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) return 0;
    //创建新节点成功将新值赋给new_node
    new_node->value = new_value;
    //将新节点插入链表中
    new_node->link = current;
    previous->link = new_node;
    return 1;
}

```

------

版本一的代码有一些缺陷在于，首先如果要插入的节点的数大于已有的所有节点的value时，需要插入到最后的位置上，但是版本一的代码中第一个while循环会出现对NULL指针的间接访问，程序会出错，因此在这个循环中需要加一个判断条件即current指针不为NULL，另外一个问题在于我们的版本一的代码无法访问到root指针的内容，所以当在头结点的需要插入一个新节点是无法进行操作的，因此我们需要将头结点的指针作为参数传入或者传入这个头结点的指针的指针（函数具有普适性）

版本二单链表的插入新节点

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sll_insert_2(Node **root, int new_value);

int sll_insert_2(Node **root, int new_value)
{
    Node *current = *root;
    Node *previous = NULL;
    Node *new_node;
    while (current != NULL && current->value < new_value){
        previous = current;
        current = current->link;
    }
    new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) return 0;
    new_node->value = new_value;
    new_node->link = current;
    //考虑插入的位置是头结点的时候
    if (previous == NULL){
        *root = new_node;
    }
    else{
        previous->link = new_node;
    }
    return 1;
}
```

版本二的代码完善了这两个问题，可以基本实现完整的需要进行新节点插入时的要求（在头节点位置或者尾节点位置均可以）。但是实际上这个代码还是可以继续优化的，下面给出版本三的代码：

版本三单链表插入新节点

```c 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int value;
    struct node *link;
}Node;

int sll_insert3(Node **rootp, int new_value);

int sll_insert3(Node **rootp, int new_value)
{
    Node *current;
    Node *new_node;
    while ((current = *rootp) !=NULL && current->value < new_value){
        rootp = &current->link;
    }
    new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) return 0;
    new_node->value = new_value;
    new_node->link = current;
    *rootp = new_node;
    return 1;
}
```

最终的版本通过一种更加一般的方式来进行新节点的插入，主要的问题在于，对于每一个在链表中的节点来说，我们在访问并插入新节点的时候，都是在对链表中的节点的link指针进行操作，而由于第一个节点的link指针是通过头指针去操作的，这个属于一种特殊的情况。考虑更想通过一种更加一般化的方式去访问每个节点的link指针，这里就构建了一个rootp指针，每一次在寻找插入位置的循环时都是将rootp节点指向当前节点的link指针，同时将current指针指向下一个节点，这样就可以省去使用previous指针。

-------

#### 双链表

基本的数据结构类型：

```c
struct Dnode{
    struct Dnode *fwd;
    struct Dnode *bwd;
    int value;
}Double_node;
```

双链表的构成方式：使用一个root节点，这个root节点的fwd指针指向的是第一个节点，bwd指针指向的是最后一个节点。

在双链表中进行插入节点的操作，一共会出现四种情况：

1. 新值插入的位置是链表的中间位置
2. 新值插入的位置是链表的起始位置
3. 新值插入的位置是链表的结束位置
4. 该链表为空，插入的新值是第一个节点

