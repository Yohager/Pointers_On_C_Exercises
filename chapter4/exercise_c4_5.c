/*
��дһ�����򣬴ӱ�׼����һ��һ�еĶ�ȡ�ı�������ļ��������л��߸��������ڵ��ı�������ͬ���ӡ����һ�У������в���ӡ
ʵ����
input:

This is the first line.
Another line.
And another.
And another.
And another.
Still More.
Almost done now.
Almost done now.
Still More.
Finished!

output:
And another.
Almost done now.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 128

int main()
{
    char temp[MAX_SIZE] = "\0";
    char result[MAX_SIZE] = "\0";
    int symbol = 0;
    FILE *fp = fopen("exercise_c4_5_testfile.txt","r");
    if (fp == NULL){
        printf("error");
        return 0;
    }
    while (!feof(fp)){
        fgets(temp,MAX_SIZE,fp);
        if (strcmp(temp,result)!=0){
            symbol = 0;
            strcpy(result,temp);
            //puts(result);
        }
        else if (!symbol){
            symbol = 1;
            puts(temp);
        }
    }
    return 0;
}
