/*
��дһ������my_strcat
������strcpy�����ǲ������Ŀ�����飬���Ľ��������һ���������ַ���
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

size_t my_strlen(char const *string, int size);
char *my_strcat(char *dst, char const *src, int size);

size_t my_strlen(char const *string, int size)
{
    register size_t length;
    for (length=0; length < size; length++){
        if (*string++ == '\0'){
            break;
        }
    }
    return length;
}
char *my_strcat(char *dst, char const *src, int size)
{
    int length;
    size -= 1;
    //��һ����Ϊ�˼��dst����ַ����ĳ���
    length = size - (int)my_strlen(dst,size);
    if (length > 0){
        strncat(dst, src, length);
        dst[size] = '\0';
    }
    return dst;
}
