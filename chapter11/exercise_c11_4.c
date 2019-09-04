/*
编写一个程序，按照下图的样子创建数据结构，最后三个对象都是动态分配的结构
第一个对象是一个静态的指向结构的指针
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
