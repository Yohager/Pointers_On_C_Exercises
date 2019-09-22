/*
��ת����
��ת��λ��m��n��������ʹ��һ��ɨ����ɷ�ת
*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void reverse_linklist(Node *ptr, int m, int n);
void traverse_linklist(Node *q);

int main()
{
    Node *linklist;
    linklist = (Node *)malloc(sizeof(Node));
    linklist->data = 0;
    linklist->next = NULL;
    Node *p = linklist;
    Node *q = linklist;
    for (int i=5;i>0;i--){
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->data = i;
        new_node->next = p->next;
        p->next = new_node;
    }
    traverse_linklist(linklist->next);
    printf("\n");
    int m = 2;
    int n = 4;
    reverse_linklist(linklist,m,n);
    traverse_linklist(linklist->next);
    return 0;
}

void traverse_linklist(Node *q)
{
    while (q != NULL){
        printf("%d->",q->data);
        q = q->next;
    }
    printf("NULL");
}

void reverse_linklist(Node *ptr,int m, int n)
{
    Node *k = ptr->next;
    Node *q = ptr->next;
    int count_1 = 1;
    while (count_1 < m-1){
        k = k->next;
        count_1++;
    }

    Node *p = k->next;
    Node *temp_1 = p;
    int count_2 = 1;

    while (count_2 < n){
        q = q->next;
        count_2++;
    }
    Node *temp_2 = q->next;
    //����p��q�ֱ�ָ���λ����������Ҫ������ת������Ƭ�ε�ͷ��β
    Node *temp = p->next;
    Node *s;
    printf("%d  %d\n",p->data,q->data);
    //printf("%d\n",(q->next)->data);
    for (int num = 0; num < (n-m); num++){
        s = temp->next;
        temp->next = p;
        p = temp;
        temp = s;
    }
    printf("%d\n",p->data);
    printf("%d\n",(p->next)->data);
    k->next = q;
    temp_1->next = temp_2;
}



