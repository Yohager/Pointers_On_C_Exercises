/*
重新编写程序12.7的dll_insert函数，使头和尾指针分别以一个单独的指针传递给函数，而不是作为一个节点的一部分
从逻辑上这个改动的效果是什么？
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
    //首先检查value是否已经存在于链表中
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
    //下面为新节点分配内存
    new_dnode = (Dnode *)malloc(sizeof(Dnode));
    if (new_dnode == NULL) return -1;
    new_dnode->value = value;
    //下面考虑将这个新的节点插入链表中
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
