/*
练习switch语句的使用
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int which_word = 0;
    printf("请输入提问的要求：");
    scanf("%d",&which_word);
    switch (which_word){
    case 1:
        printf("who");
        break;
    case 2:
        printf("what");
        break;
    case 3:
        printf("when");
        break;
    case 4:
        printf("where");
        break;
    case 5:
        printf("why");
        break;
    default:
        printf("wrong number!");
        break;
    }
    return 0;
}
