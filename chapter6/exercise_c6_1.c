/*
编写一个函数：在一个字符串中进行搜索，查找所有在一个给定字符集和中出现的字符
函数原型：char *find_char(char const *source, char const *chars);
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#define MAX_SIZE 1000

char *find_char(char const *source, char const *chars);

int main()
{
    char str_1[MAX_SIZE];
    char str_2[MAX_SIZE];
    char const *source;
    char const *chars;
    source = &str_1;
    chars = &str_2;
    gets(str_1);
    gets(str_2);
    printf("%s %s",str_1,str_2);
    char *result;
    result = find_char(source,chars);
    printf("%s",*result);
    return 0;
}

char *find_char(char const *source, char const *chars){
    char *temp = source;
    char *result = NULL;
    while(*source != NULL){
        result = chars;
        while(*result != NULL){
            if (*temp = *result){
                return source;
            }
            result++;
        }
        temp++;
    }
    return NULL;
}
