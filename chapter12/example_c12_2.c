/*
改进版本的单链表插入函数
改进了在头节点位置和尾部插入新节点时的一些小问题
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int value;
    struct node *link;
}Node;

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

