/*
��дһ����Ϊmax_list�ĺ����������ڼ��������Ŀ�����Ͳ��������������е����ֵ
�����б������һ����ֵ��β������ʾ�б�Ľ�����
*/


//�����Ŀ��Ҫ����stdarg.h�Ŀɱ�����б�ûɶ��˼��������д������ˣ��õ�̫����


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

int max_list(int *value_list);

int main()
{
    int values[MAX_SIZE];
    int i = 0;
    char symbol;
    while (symbol = getchar() != '\n'){
        scanf("%d",&values[i]);
        i++;
    }
    return 0;

}
