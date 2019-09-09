/*
编写一个函数用于记录一个单链表的节点个数
唯一的参数是一个指向链表第一个节点的指针
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

int calculate_node_numbers(Node *first);

int calculate_node_numbers(Node *first)
{
    int count = 0;
    Node *temp;
    for (temp=first; temp!=NULL; temp=temp->next){
        count++;
    }
    return count;
}
