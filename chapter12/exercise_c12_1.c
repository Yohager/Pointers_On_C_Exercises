/*
��дһ���������ڼ�¼һ��������Ľڵ����
Ψһ�Ĳ�����һ��ָ�������һ���ڵ��ָ��
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
