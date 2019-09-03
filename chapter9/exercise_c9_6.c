/*
编写一个函数my_strcpy_end
用于取代strcpy函数，它返回的是一个指向目标字符串末尾的指针（也就是说指向NUL字节的指针）而不是返回一个指向目标字符串起始位置的指针
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_strcpy_end(char *dst, char const *src);

char *my_strcpy_end(char *dst, char const *src)
{
    strcpy(dst, src);
    return dst + strlen(dst);
}
