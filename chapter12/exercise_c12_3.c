/*
���±�д����12.7��dll_insert������ʹͷ��βָ��ֱ���һ��������ָ�봫�ݸ���������������Ϊһ���ڵ��һ����
���߼�������Ķ���Ч����ʲô��
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct DNODE{
    struct DNODE *fwd;
    struct DNODE *bwd;
    int value;
}Dnode;

int dll_insert(Dnode **frontp, Dnode **rearp, int value);

int dll_insert(Dnode **frontp, Dnode **rearp, int value)
{
    Dnode **this_node;
    Dnode *next;
    Dnode *new_dnode;
    //���ȼ��value�Ƿ��Ѿ�������������
    this_node = frontp;
    while ((next = *this_node)!=NULL){
        if (next->value == value){
            return 0;
        }
        if (next->value < value){
            break;
        }
        this_node = &next->fwd;
    }
    //����Ϊ�½ڵ�����ڴ�
    new_dnode = (Dnode *)malloc(sizeof(Dnode));
    if (new_dnode == NULL) return -1;
    new_dnode->value = value;
    //���濼�ǽ�����µĽڵ����������
    new_dnode->fwd = next;
    *this_node = new_dnode;
    if (this_node != frontp){
        if (next != NULL){
            new_dnode->bwd = next->bwd;
        }
        else{
            new_dnode->bwd = *rearp;
        }
    }
    else{
        new_dnode->bwd = NULL;
    }
    if (next != NULL){
        next->bwd = new_dnode;
    }
    else{
        *rearp = new_dnode;
    }
    return 1;
}
