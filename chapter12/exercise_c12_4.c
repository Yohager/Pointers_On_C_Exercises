/*
��дһ��������������һ������������нڵ�
����ԭ�ͣ�
struct NODE *sll_reverse(struct NODE *first);
�����Ĳ���ָ������ĵ�һ���ڵ㣬�������������к󣬺�������һ��ָ��������ͷ����ָ��
��������һ���ڵ��link�ֶε�ֵӦ����ΪNULL���ڿ�����first=NULL����ִ�������������NULL
������ľ͵�����
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
