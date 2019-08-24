/*
编写一个函数
删除一个字符串中的一部分
函数原型；int del_substr(char *str, char const *substr);
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int del_substr(char *str, char const *substr);

int main()
{
    char str_1[] = "ABCDEF";
    char substr_1[] = "BCDQ";
    int result;
    result = del_substr(str_1,substr_1);
    printf("%d",result);
    return 0;
}

int del_substr(char *str, char const *substr){
    char *str_1 = str;
    char *temp;
    char *q;
    if (str != NULL){
        if (substr == NULL){
            return 1;
        }
        while (*str_1 != '\0'){
            q = substr;
            temp = str_1;
            while (*q != '\0'){
                if (*q++ != *temp++){
                    break;
                }
            }
            if (*q == '\0'){
                while (*str_1++ = *temp++)
                    ;
                return 1;
            }
            str_1++;
        }
    }
    return 0;
}
