/*
编写一个程序：对标准输入进行扫描，并对单词“the”出现的次数进行统计
进行比较时应该区分大小写，所以The和THE并不计算在内
你可以认为各单词由一个或者多个空格字符分隔，而且输入行在长度上不会超过100个字符
计数结果应该写在标准输出上
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int counter_the_char(char *string);

int main()
{
    char string[MAX_SIZE];
    printf("请输入一段话：");
    gets(string);
    int numbers = counter_the_char(string);
    printf("单词the一共出现了%d次。",numbers);
    return 0;
}

int counter_the_char(char *string)
{
    int counter = 0;
    const char group[] = " \n\r\f\t\v";
    char *temp = strtok(string,group);
    while (temp!=NULL){
        //printf("%s\n",temp);
        //printf("%d\n",strcmp(temp,"the"));
        if (strcmp(temp,"the") == 0){
            counter++;
        }
        temp = strtok(NULL,group);
    }
    return counter;
}
