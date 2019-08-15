/*
从一个字符串中提取一个子串，函数原型为：
int substr(char dst[], char src[], int start, int len);
从src数组的起始位置向后start个字符开始复制len个非null的字符到dst数组中
函数的返回值是存储于dst数组中的字符串的长度。
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

int substr(char dst[], char src[], int start, int len);

int main()
{
    char str_1[MAX_SIZE] = "\0";
    char dst_1[MAX_SIZE] = "\0";
    int start = 0;
    int length = 0;
    printf("输入一个字符串用于提取子串：");
    gets(str_1);
    printf("输入提取位置和长度并以逗号隔开：");
    scanf("%d,%d",&start,&length);
    int sub_str_len = 0;
    sub_str_len = substr(dst_1,str_1,start,length);
    printf("%d\n",sub_str_len);
    printf("%s",dst_1);
    return 0;
}

int substr(char dst[], char src[], int start, int len){
    int src_length = 0;
    src_length = strlen(src);
    if (start > src_length || start < 0 || len < 0){
        dst = "\0";
        return 0;
    }
    else if (start+len-1 < src_length){
        for (int i=0; i<len; i++){
            dst[i] = src[i+start-1];
        }
        return strlen(dst);
    }
    else if (start+len-1 >= src_length){
        for (int k=0; k<src_length-start+1; k++){
            dst[k] = src[k+start-1];
        }
        return strlen(dst);
    }
    printf("%s\n",dst);
}
