/*
��дһ��������һ���ַ�����ȥ������Ŀո�
����ԭ�ͣ�
void deblank(char string[]);
�����������ַ����������һ���ط���һ�����߶�������Ŀո���ɾ��޸�Ϊ�����ո��ַ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

void deblank(char string[]);
int main()
{
    char src_1[MAX_SIZE] = "\0";
    printf("����һ���ַ�����");
    gets(src_1);
    deblank(src_1);
    printf("%s",src_1);
    return 0;
}

void deblank(char string[]){
    int length = strlen(string);
    char new_string[MAX_SIZE] = "\0";
    int i = 0;
    int j = 0;
    for (i;i<length;i++){
        if (string[i] != " " && string[i+1] != " "){
            new_string[j++] = string[i];
        }
    }
    printf("%s\n",new_string);
}
