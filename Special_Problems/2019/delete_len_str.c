/*
��дһ������
�ú����Ĺ����ǽ�һ���ַ�����n��λ���𳤶�Ϊlen���ַ���ɾ��
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
    printf("������Ҫ����ɾ���������ַ�����");
    gets(string);
    printf("������ɾ����λ���Լ�ɾ���ĳ��ȣ�");
    scanf("%d %d",&n,&len);
    printf("ɾ��ǰ��string: %s\n",string);
    delete_len_str(string,n,len);
    printf("ɾ�����string: %s\n",string);
}

void delete_len_str(char *string, int n, int len)
{
    int length = strlen(string);
    //���n�����ַ����ĳ��Ȼ���len������n��ʼ��ĩβ�ĳ���ֱ�ӷ���
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
    //tempָ��Ҫɾ�����ַ����е���ʼλ�ã�temp_2ָ��Ҫɾ�����ַ������յ�λ��
    while (*temp_2 != '\0' && len >= 0){
        len--;
        *temp++ = *temp_2++;
    }
    *temp = '\0';
}
