/*
����ԭ�ͣ�int ascii_to_integer(char *string);
����ַ��������������һ�����߶�����֣�����Ӧ�ð���Щ�����ַ�ת��Ϊ�����������������������ַ��������������κη������ַ��������ͷ����㡣
��ʾ��ÿ����һ�����֣�����ǰ��ֵ����10�������ֵ��������������ĵ�ֵ���
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ascii_to_integer(char *string);

int main()
{
    char string[] = "12343";
    int result;
    result = ascii_to_integer(string);
    printf("%d",result);
    return 0;
}

int ascii_to_integer(char *string){
    int total_value = 0;
    while (*string >= '0' && *string <= '9'){
        total_value *= 10;
        total_value += *string - '0';
        string++;
    }
    if (*string != '\0'){
        return 0;
    }
    return total_value;
}
