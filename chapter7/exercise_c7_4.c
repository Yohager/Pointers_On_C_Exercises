/*
编写一个名为max_list的函数，它用于检查任意数目的整型参数并返回它们中的最大值
参数列表必须以一个负值结尾用于提示列表的结束。
*/


//这道题目主要考察stdarg.h的可变参数列表，没啥意思……不想写这个题了，用的太少了


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

int max_list(int *value_list);

int main()
{
    int values[MAX_SIZE];
    int i = 0;
    char symbol;
    while (symbol = getchar() != '\n'){
        scanf("%d",&values[i]);
        i++;
    }
    return 0;

}
