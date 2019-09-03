/*
编写一个函数my_strcat
类似于strcpy，但是不会溢出目标数组，它的结果必须是一个真正的字符串
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
    //这一步是为了检查dst这个字符串的长度
    length = size - (int)my_strlen(dst,size);
    if (length > 0){
        strncat(dst, src, length);
        dst[size] = '\0';
    }
    return dst;
}
