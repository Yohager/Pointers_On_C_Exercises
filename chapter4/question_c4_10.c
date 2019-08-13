/*
编写一些语句从标准输入读取整型数，然后打印一些空白行，行数由整型数决定
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int count = 0;
    printf("please enter one integer: ");
    scanf("%d",&count);
    printf("********");
    for (int number = 0; number < count; number++){
        printf("\n");
    }
    printf("********");
    return 0;
}
