/*
��д������
void my_strncat(char *dest, char *src, int dest_len);
�����ڽ�src�е��ַ������ӵ�dest��ԭ�е��ַ�����ĩβ��������֤�����������Ϊdest_len��dest����
��strcat������ͬ���������Ҳ����ԭ�ȴ�����dest������ַ������ȣ�����ܹ���֤����������߽�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strncat(char *dest, char *src, int dest_len);

void my_strncat(char *dest, char *src, int dest_len)
{
    int length;
    length = dest_len - (int)strlen(dest);
    if (length > 0){
        strncat(dest,src,length);
        dest[dest_len - 1] = '\0';
    }
    return dest;
}
