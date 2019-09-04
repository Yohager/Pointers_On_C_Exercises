/*
在一个双链表中插入一个新的节点
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
    //首先需要检查这个new_value是否已经在双链表中
    //同时我们通过这个遍历循环寻找新值应该插入的位置
    //current指针指向的是新值节点插入的前一节点
    //temp指针指向的是新值节点插入的后一节点
    for (current=rootp; (temp = current->fwd) != NULL; current=temp){
        //如果new_value已经在这个双链表中则函数直接返回
        if (temp->value == new_value) return 0;
        if (temp->value > new_value) break;
    }
    new_dnode = (Dnode *)malloc(sizeof(Dnode));
    if (new_dnode == NULL) return 0;
    new_dnode->value = new_value;
    //下面开始讨论出现的四种情况下的哪一种
    if (temp!=NULL){
        if (current!=NULL){
            //这种是插入在中间的情况
            new_dnode->fwd = temp;
            new_dnode->bwd = current;
            current->fwd = new_dnode;
            temp->bwd = new_dnode;
        }
        else{
            //这种情况下是插入在第一个节点处
            new_dnode->fwd = temp;
            temp->bwd = new_dnode;
            rootp->fwd = new_dnode;
            new_dnode->bwd = NULL;
        }
    }
    else{
        if (current!=rootp){
            //这种情况是插入在结尾的位置上
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
