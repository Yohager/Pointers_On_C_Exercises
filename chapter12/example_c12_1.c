/*
������Ĳ���
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
    //����Ѱ�Ҳ���ڵ��λ��
    while (current->value < new_value){
        previous = current;
        current = current->link;
    }
    //Ϊ�½ڵ�����ڴ�
    new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) return 0;
    //�����½ڵ�ɹ�����ֵ����new_node
    new_node->value = new_value;
    //���½ڵ����������
    new_node->link = current;
    previous->link = new_node;
    return 1;
}
