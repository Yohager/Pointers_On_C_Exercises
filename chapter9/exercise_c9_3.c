/*
��дһ������my_strcpy
������strcpy���������������Ŀ�����飬���ƵĽ��������һ���������ַ���
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

char *my_strcpy(char *dst, char const *src, int size);

char *my_strcpy(char *dst, char const *src, int size)
{
    strncpy(dst, src, size);
    dst[size-1] = '\0';
    return dst;
}
