/*
编写一个函数my_strcpy
类似于strcpy，但是它不会溢出目标数组，复制的结果必须是一个真正的字符串
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
