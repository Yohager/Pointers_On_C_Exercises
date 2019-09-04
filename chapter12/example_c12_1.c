/*
单链表的插入
*/
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
