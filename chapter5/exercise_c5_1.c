/*
�ӱ�׼�����ж�ȡ�ַ��������еĴ�д��ĸתΪСд��ĸ
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

int main()
{
    printf("input one str: ");
    char ch[MAX_SIZE];
    gets(ch);
    int length = strlen(ch);
    for (int i=0; i<length; i++){
        if (ch[i] >= 'A' && ch[i] <= 'Z'){
            ch[i] = ch[i] + 32;
        }
    }
    printf("upper str is: %s",ch);
    return 0;
}
