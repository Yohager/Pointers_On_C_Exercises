/*
编写函数reverse_string
函数原型：void reverse_string(char *string);
函数将参数字符串中的字符反向排列。请使用指针而不是数组下标，不要使用任何C函数库中的用于操纵字符串的函数
不需要声明一个局部数组来临时存储参数字符串
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_string(char *string);

int main()
{
    char str_1[] = "abcdsa";
    printf("%s\n",str_1);
    //printf("%s",str_1);
    reverse_string(str_1);
    printf("%s",str_1);
    return 0;
}

void reverse_string(char *string){
    char *last;
    last = string;
    for (; *last != '\0'; last++){
        ;
    }
    last--;
    //现在已经将last传递至字符串的尾部
    while (string < last){
        char temp;
        temp = *string;
        *string++ = *last;
        *last-- = temp;
    }
}
