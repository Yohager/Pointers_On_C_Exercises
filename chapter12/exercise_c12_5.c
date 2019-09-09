/*
��дһ������
��һ���������Ƴ�һ���ڵ�
����ԭ�ͣ�int sll_remove(struct NODE **rootp, struct NODE *node);
�����ĵ�һ��������ָ�������ָ���ָ�룻�ڶ���������ָ����Ҫ�Ƴ��Ľڵ��ָ��
���������������Ҫɾ���Ľڵ㣬��������-1������ɾ���ڵ㲢����1
*/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct NODE{
    int value;
    struct NODE *link;
}Dnode;

int sll_remove(Dnode **rootp, Dnode *node);
int sll_remove_2(Dnode **rootp, Dnode *delete_node);

int sll_remove(Dnode **rootp, Dnode *node)
{
    if (*rootp == NULL) return -1;
    //���ȼ�������Ƿ����Ҫɾ���Ľڵ�
    Dnode *temp = *rootp;
    while (temp!=NULL){
        if (temp->link == node) break;
        temp = temp->link;
    }
    if (temp == NULL) return -1;
    //���ڼ����ҵ���node����ʱtempָ���λ����node��ǰһ���ڵ�
    temp->link = node->link;
    free(temp);
    return 1;
}

int sll_remove_2(Dnode **rootp, Dnode *delete_node)
{
    Dnode *temp;
    assert(delete_node != NULL);
    //������������Ѱ����Ҫɾ���Ľڵ�
    while ((temp = *rootp)!=NULL && temp != delete_node){
        rootp = &temp->link;
    }
    if (temp == delete_node){
        *rootp = temp->link;
        free(temp);
        return 1;
    }
    else{
        return -1;
    }
}

