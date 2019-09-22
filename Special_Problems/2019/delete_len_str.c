/*
编写一个函数
该函数的功能是将一个字符串第n个位置起长度为len的字符串删除
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

void delete_len_str(char *string, int n, int len);

int main()
{
    char string[MAX_SIZE] = {0};
    int n,len;
    printf("输入需要进行删除操作的字符串：");
    gets(string);
    printf("请输入删除的位置以及删除的长度：");
    scanf("%d %d",&n,&len);
    printf("删除前的string: %s\n",string);
    delete_len_str(string,n,len);
    printf("删除后的string: %s\n",string);
}

void delete_len_str(char *string, int n, int len)
{
    int length = strlen(string);
    //如果n超过字符串的长度或者len超过从n开始到末尾的长度直接返回
    if (n > length) return;
    if ((length - n) < len) return;
    char *temp = string;
    for (int i=0; i<n;i++){
        temp++;
    }
    printf("temp:%c\n",*temp);
    char *temp_2 = temp;
    for (int j=0;j<len;j++){
        temp_2++;
    }
    printf("temp_2:%c\n",*temp_2);
    //temp指向要删除的字符串中的起始位置，temp_2指向要删除的字符串的终点位置
    while (*temp_2 != '\0' && len >= 0){
        len--;
        *temp++ = *temp_2++;
    }
    *temp = '\0';
}
