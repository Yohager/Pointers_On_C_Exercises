/*
编写一个函数从一个字符串中去除多余的空格
函数原型：
void deblank(char string[]);
当函数发现字符串中如果有一个地方由一个或者多个连续的空格组成就修改为单个空格字符
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

void deblank(char string[]);
int main()
{
    char src_1[MAX_SIZE] = "\0";
    printf("输入一个字符串：");
    gets(src_1);
    deblank(src_1);
    printf("%s",src_1);
    return 0;
}

void deblank(char string[]){
    int length = strlen(string);
    char new_string[MAX_SIZE] = "\0";
    int i = 0;
    int j = 0;
    for (i;i<length;i++){
        if (string[i] != " " && string[i+1] != " "){
            new_string[j++] = string[i];
        }
    }
    printf("%s\n",new_string);
}
