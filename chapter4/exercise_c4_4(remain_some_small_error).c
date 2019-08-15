/*
��д����copy_n��void copy_n(char dst[],char src[],int n);
���ڽ�һ���ַ�����src���鸴�Ƶ�dst������
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

void copy_n(char dst[],char src[],int n);
void copy_n_other_solutions(char dst[], char src[], int n);

int main()
{
    char src_1[MAX_SIZE] = "\0";
    int number = 0;
    printf("��������Ҫ���Ƶ��ַ�����");
    scanf("%s",&src_1);
    printf("��������Ҫ�����ַ�����������");
    scanf("%d",&number);
    char dst_1[number];
    for (int k=0; k<number; k++){
        dst_1[k] = 0;
    }
    //copy_n(dst_1,src_1,number);
    copy_n_other_solutions(dst_1,src_1,number);
    return 0;
}

void copy_n(char dst[],char src[], int n){
    int length;
    length = strlen(src);
     //src����ĳ���û�г���n
    if (length <= n){
        for (int i=0; i<length; i++){
            dst[i] = src[i];
        }
     }
    else{
        for (int j=0; j<n; j++){
            dst[j] = src[j];
        }
     }
    printf("%s",dst);
}

void copy_n_other_solutions(char dst[],char src[], int n){
    int dst_index, src_index;
    src_index = 0;
    for (dst_index=0; dst_index < n; dst_index++){
        dst[dst_index] = src[src_index];
        if (src[src_index] != 0){
            src_index += 1;
        }
    }
    printf("%s",dst);
}
