/*
�ж������ε�����
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("�����������������Զ��Ÿ�����");
    scanf("%d,%d,%d",&a,&b,&c);
    if ((a+b) <= c || (a+c) <= b || (b+c) <= a){
        printf("��������������޷����������Σ�");
        return 0;
    }
    if (a==b && b==c){
        printf("�ȱ�������");
    }
    else if (a==b || b==c || a==c ){
        printf("����������");
    }
    else{
        printf("��ͨ������");
    }
    return 0;
}
