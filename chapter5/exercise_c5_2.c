/*
�ӱ�׼��������ַ�������ĸ�ַ������������ĸ�ַ��������
���ܷ�ʽ��
ÿ����ĸ���޸�Ϊ����ĸ���Ͼ�����13��λ�õ���ĸ
A => N
B => O
Z => M
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("please input one str for encrypt: ");
    gets(ch);
    int length = strlen(ch);
    for (int i=0; i<length; i++){
        if (ch[i] >= 'a' && ch[i] <= 'z'){
            if (ch[i] + 13 <= 'z'){
                ch[i] += 13;
            }
            else{
                ch[i] -= 13;
            }
        }
        if (ch[i] >= 'A' && ch[i] <= 'Z'){
            if (ch[i] + 13 <= 'Z'){
                ch[i] += 13;
            }
            else{
                ch[i] -= 13;
            }
        }
    }
    puts(ch);
    return 0;
}
