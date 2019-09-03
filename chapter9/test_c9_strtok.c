/*
简单测试一下strtok函数的用法
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
    char string_1[MAX_SIZE] = "hello,this,is,the,world";
    const char group[2] = ",";
    char *token;
    token = strtok(string_1,group);
    while (token != NULL){
        printf("%s\n",token);
        token = strtok(NULL,group);
    }
    return 0;
}
