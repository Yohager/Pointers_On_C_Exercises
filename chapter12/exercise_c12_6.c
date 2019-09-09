/*
编写一个函数从双链表中移除一个节点
函数原型：int dll_remove(struct NODE *rootp, struct NODE *node);
第一个参数：一个指向根节点的指针
第二个参数：指向想要删除的节点的指针
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
    //检查链表中是否存在这个node节点
    for (temp = rootp->fwd; temp != NULL; temp = temp->fwd){
        if (temp == node) break;
    }
    if (temp == node){
        if (temp->bwd == NULL){
            //这种情况下表示删除的节点是头结点
            rootp->fwd = temp->fwd;
        }
        else{
            temp->bwd->fwd = temp->fwd;
        }
        if (temp->fwd == NULL){
            //这种情况下表示删除的节点是尾节点
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
