/*
编写一个函数用于在无序的单链表中寻找一个特定的值，并返回一个指向这个节点的指针
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

Node *search_function(Node *first, int value);

Node *search_function(Node *first, int value)
{
    Node *temp = first;
    if (first == NULL) return NULL;
    while (temp != NULL){
        if (temp->data == value){
            return temp;
        }
        temp++;
    }
}
