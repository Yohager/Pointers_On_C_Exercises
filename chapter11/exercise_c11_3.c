/*
��дһ�������ӱ�׼�����ȡһ���ַ��������ַ������Ƶ���̬������ڴ��в����ظ��ַ����Ŀ���
���������Ӧ�ö�������ַ����ĳ������κε�����
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_copy_function(char *string);

int main()
{
    char str_1[1000];
    printf("��������Ҫ�������ַ�����");
    gets(str_1);
    char *new_str;
    new_str = my_copy_function(str_1);
    printf("%s\n",new_str);
    return 0;
}

char *my_copy_function(char *string)
{
    int length = strlen(string);
    char *new_string;
    new_string = malloc(length*sizeof(char));
    if (new_string == NULL) return NULL;
    strcpy(new_string,string);
    return new_string;
}
