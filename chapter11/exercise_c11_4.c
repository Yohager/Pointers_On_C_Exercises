/*
��дһ�����򣬰�����ͼ�����Ӵ������ݽṹ��������������Ƕ�̬����Ľṹ
��һ��������һ����̬��ָ��ṹ��ָ��
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct NODE{
    int data;
    struct NODE *link;
}Node;

Node *new_node(int value);

int main()
{
    Node *head;
    head = new_node(5);
    head->link = new_node(10);
    head->link->link = new_node(15);
    head->link->link->link = NULL;
    return 0;
}

Node *new_node(int value)
{
    Node *new_1;
    new_1 = (Node*)malloc(sizeof(Node));
    new_1->data = value;
    return new_1;
}
