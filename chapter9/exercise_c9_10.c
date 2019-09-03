/*
编写函数：int palindrome(char *string);
如果参数字符串是一个回文，函数就返回真，否则就返回假。
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FALSE 0
#define TRUE  1


int palindrome(char *string);

int main()
{
    char string_1[] = "abcbac";
    int result = palindrome(string_1);
    printf("%d",result);
    return 0;
}

int palindrome(char *string)
{
    char *temp_1 = string;
    char *temp_2 = string + strlen(string) - 1;
    for (; *temp_1 != '\0'; temp_1++){
        if (*temp_1 != *temp_2--){
            break;
        }
        if (temp_1 > temp_2){
            return TRUE;
        }
    }
    return FALSE;
}
