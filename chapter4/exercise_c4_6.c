/*
��һ���ַ�������ȡһ���Ӵ�������ԭ��Ϊ��
int substr(char dst[], char src[], int start, int len);
��src�������ʼλ�����start���ַ���ʼ����len����null���ַ���dst������
�����ķ���ֵ�Ǵ洢��dst�����е��ַ����ĳ��ȡ�
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
    printf("����һ���ַ���������ȡ�Ӵ���");
    gets(str_1);
    printf("������ȡλ�úͳ��Ȳ��Զ��Ÿ�����");
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
