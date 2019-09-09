/*
编写一个函数反向排序一个单链表的所有节点
函数原型：
struct NODE *sll_reverse(struct NODE *first);
函数的参数指向链表的第一个节点，当链表被重新排列后，函数返回一个指向链表新头结点的指针
链表的最后一个节点的link字段的值应设置为NULL，在空链表（first=NULL）上执行这个函数返回NULL
单链表的就地逆置
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int value;
    struct NODE *link;
}Dnode;

Dnode *sll_reverse(Dnode *first);

Dnode *sll_reverse(Dnode *first)
{
    Dnode *previous;
    Dnode *next;
    for (previous=NULL; first!=NULL; first=next){
        next = first->link;
        first->link = previous;
        previous = first;
    }
    return previous;
}
