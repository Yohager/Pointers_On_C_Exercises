/*
��дһ������my_strlen�ĺ�������������strlen�������ܹ���������strn--������������δ��NUL�ֽڽ�β���ַ�������Ҫ��������һ������������ֵ���Ǳ�������Ҫ���г��Ȳ��Ե��ַ���������ĳ���
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

size_t my_strlen(char const *string, int size);

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
