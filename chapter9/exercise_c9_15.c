/*
��дһ������Ϊ��Ԫ�������ṩ��ӡ������ʱ���ö��Ž��зָ��Ĳ���
����ԭ�ͣ�void dollars(char *dest, char const *src);
srcָ������Ҫ����ʽ�����ַ�����������浽dest��
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 1000


void dollars(char *dest, char const *src);

int main()
{
    char src[] = "12345";
    char dest[MAX_SIZE];
    dollars(dest,src);
    printf("%s\n",dest);
    return 0;
}

void dollars(char *dest, char const *src)
{
    if (*src == '\0'){
        *dest = "$0.00";
    }
    //��tempָ��ָ��src�����һ��Ԫ��
    *dest++ = '$';
    if (strlen(src) > 3){
        int i;
        for (i=(int)strlen(src)-2; i>0;){
            *dest++ = *src++;
            if (--i > 0 && i%3 == 0){
                *dest++ = ',';
            }
        }
    }
    else *dest++ = '0';
    *dest++ = '.';
    if (strlen(src) < 2){
        *dest++ = '0';
    }
    else{
        *dest++ = *src++;
    }
    if (strlen(src) < 1){
        *dest++ = '0';
    }
    else{
        *dest++ = *src;
    }
    *dest = 0;
}
