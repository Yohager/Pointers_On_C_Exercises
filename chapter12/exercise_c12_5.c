/*
编写一个程序
从一个单链表移除一个节点
函数原型：int sll_remove(struct NODE **rootp, struct NODE *node);
函数的第一个参数：指向链表根指针的指针；第二个参数：指向想要移除的节点的指针
如果链表并不包含想要删除的节点，函数返回-1，否则删除节点并返回1
*/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct NODE{
    int value;
    struct NODE *link;
}Dnode;

int sll_remove(Dnode **rootp, Dnode *node);
int sll_remove_2(Dnode **rootp, Dnode *delete_node);

int sll_remove(Dnode **rootp, Dnode *node)
{
    if (*rootp == NULL) return -1;
    //首先检查链表是否包含要删除的节点
    Dnode *temp = *rootp;
    while (temp!=NULL){
        if (temp->link == node) break;
        temp = temp->link;
    }
    if (temp == NULL) return -1;
    //现在假设找到了node，此时temp指向的位置是node的前一个节点
    temp->link = node->link;
    free(temp);
    return 1;
}

int sll_remove_2(Dnode **rootp, Dnode *delete_node)
{
    Dnode *temp;
    assert(delete_node != NULL);
    //首先在链表中寻找需要删除的节点
    while ((temp = *rootp)!=NULL && temp != delete_node){
        rootp = &temp->link;
    }
    if (temp == delete_node){
        *rootp = temp->link;
        free(temp);
        return 1;
    }
    else{
        return -1;
    }
}

