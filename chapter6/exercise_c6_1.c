/*
��дһ����������һ���ַ����н�������������������һ�������ַ������г��ֵ��ַ�
����ԭ�ͣ�char *find_char(char const *source, char const *chars);
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#define MAX_SIZE 1000

char *find_char(char const *source, char const *chars);

int main()
{
    char source[] = "ABCDEF";
    char chars[] = "BQCW";
    //printf("%s %s\n",str_1,str_2);
    char *result;
    result = find_char(source,chars);
    printf("%c\n",*result);
    //getchar();
    return 0;
}

char *find_char(char const *source,char const *chars)
{
    char *ps = source;
    char *pc = NULL;
    if(source == NULL || chars == NULL)
        return NULL;
    while(*ps != '\0'){
        pc = chars;
        while(*pc != '\0'){
            if(*pc == *ps)
                return ps;
            pc++;
        }
        ps++;
    }
    return NULL;
}
