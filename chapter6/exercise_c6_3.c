/*
��д����reverse_string
����ԭ�ͣ�void reverse_string(char *string);
�����������ַ����е��ַ��������С���ʹ��ָ������������±꣬��Ҫʹ���κ�C�������е����ڲ����ַ����ĺ���
����Ҫ����һ���ֲ���������ʱ�洢�����ַ���
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_string(char *string);

int main()
{
    char str_1[] = "abcdsa";
    printf("%s\n",str_1);
    //printf("%s",str_1);
    reverse_string(str_1);
    printf("%s",str_1);
    return 0;
}

void reverse_string(char *string){
    char *last;
    last = string;
    for (; *last != '\0'; last++){
        ;
    }
    last--;
    //�����Ѿ���last�������ַ�����β��
    while (string < last){
        char temp;
        temp = *string;
        *string++ = *last;
        *last-- = temp;
    }
}
