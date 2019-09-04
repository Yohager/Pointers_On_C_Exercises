/*
版本三：在一个有序链表中插入一个新的节点
*/
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
