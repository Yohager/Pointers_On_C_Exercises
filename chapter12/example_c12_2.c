/*
�Ľ��汾�ĵ�������뺯��
�Ľ�����ͷ�ڵ�λ�ú�β�������½ڵ�ʱ��һЩС����
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
    //���ǲ����λ����ͷ����ʱ��
    if (previous == NULL){
        *root = new_node;
    }
    else{
        previous->link = new_node;
    }
    return 1;
}

