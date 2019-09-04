/*
��һ��˫�����в���һ���µĽڵ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct DNODE{
    struct DNODE *fwd;
    struct DNODE *bwd;
    int value;
}Dnode;


int dll_insert(Dnode *rootp, int new_value);

int dll_insert(Dnode *rootp, int new_value)
{
    Dnode *current;
    Dnode *temp;
    Dnode *new_dnode;
    current = rootp->fwd;
    //������Ҫ������new_value�Ƿ��Ѿ���˫������
    //ͬʱ����ͨ���������ѭ��Ѱ����ֵӦ�ò����λ��
    //currentָ��ָ�������ֵ�ڵ�����ǰһ�ڵ�
    //tempָ��ָ�������ֵ�ڵ����ĺ�һ�ڵ�
    for (current=rootp; (temp = current->fwd) != NULL; current=temp){
        //���new_value�Ѿ������˫����������ֱ�ӷ���
        if (temp->value == new_value) return 0;
        if (temp->value > new_value) break;
    }
    new_dnode = (Dnode *)malloc(sizeof(Dnode));
    if (new_dnode == NULL) return 0;
    new_dnode->value = new_value;
    //���濪ʼ���۳��ֵ���������µ���һ��
    if (temp!=NULL){
        if (current!=NULL){
            //�����ǲ������м�����
            new_dnode->fwd = temp;
            new_dnode->bwd = current;
            current->fwd = new_dnode;
            temp->bwd = new_dnode;
        }
        else{
            //����������ǲ����ڵ�һ���ڵ㴦
            new_dnode->fwd = temp;
            temp->bwd = new_dnode;
            rootp->fwd = new_dnode;
            new_dnode->bwd = NULL;
        }
    }
    else{
        if (current!=rootp){
            //��������ǲ����ڽ�β��λ����
            new_dnode->fwd = NULL;
            current->fwd = new_dnode;
            new_dnode->bwd = current;
            rootp->bwd = new_dnode;
        }
        else{
            new_dnode->fwd = NULL;
            rootp->fwd = new_dnode;
            new_dnode->bwd = NULL;
            rootp->bwd = new_dnode;
        }
    }
    return 1;
}
