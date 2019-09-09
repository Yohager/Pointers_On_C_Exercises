/*
��дһ��������˫�������Ƴ�һ���ڵ�
����ԭ�ͣ�int dll_remove(struct NODE *rootp, struct NODE *node);
��һ��������һ��ָ����ڵ��ָ��
�ڶ���������ָ����Ҫɾ���Ľڵ��ָ��
*/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct NODE{
    int value;
    struct NODE *fwd;
    struct NODE *bwd;
}Dnode;

int dll_remove(Dnode *rootp, Dnode *node);

int dll_remove(Dnode *rootp, Dnode *node)
{
    Dnode *temp;
    assert(node != NULL);
    //����������Ƿ�������node�ڵ�
    for (temp = rootp->fwd; temp != NULL; temp = temp->fwd){
        if (temp == node) break;
    }
    if (temp == node){
        if (temp->bwd == NULL){
            //��������±�ʾɾ���Ľڵ���ͷ���
            rootp->fwd = temp->fwd;
        }
        else{
            temp->bwd->fwd = temp->fwd;
        }
        if (temp->fwd == NULL){
            //��������±�ʾɾ���Ľڵ���β�ڵ�
            rootp->bwd = temp->bwd;
        }
        else{
            temp->fwd->bwd = temp->bwd;
        }
        free(temp);
        return 1;
    }
    return -1;
}
