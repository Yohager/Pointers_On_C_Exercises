/*
��дһ������my_strcpy_end
����ȡ��strcpy�����������ص���һ��ָ��Ŀ���ַ���ĩβ��ָ�루Ҳ����˵ָ��NUL�ֽڵ�ָ�룩�����Ƿ���һ��ָ��Ŀ���ַ�����ʼλ�õ�ָ��
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
