/*
��дһ������my_strnchr()
����ԭ�ͣ�char *my_strnchr(char const *str, int ch, int which);
�������������strchr�����ǵ�������������ָ��ch��str�ַ����еĵڼ��γ���
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_strnchr(char const *str, int ch, int which);

int main()
{
    char string_1[] = "hello,world.";
    char ch = 'o';
    int counter = 2;
    char *result;
    result = my_strnchr(string_1, ch, counter);
    //printf("%c",*++result);
    return 0;
}

char *my_strnchr(char const *str, int ch, int which)
{
    char *temp;
    int count = 0;
    for (temp=str; *temp != '\0'; temp++){
        if (*temp == ch){
            count+=1;
            if (count == which){
                return temp;
            }
        }
    }
    return NULL;
}

