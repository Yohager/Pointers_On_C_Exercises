/*
��дһ����������������ĵ�������Ѱ��һ���ض���ֵ��������һ��ָ������ڵ��ָ��
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
