/*
��дһ�����򣺶Ա�׼�������ɨ�裬���Ե��ʡ�the�����ֵĴ�������ͳ��
���бȽ�ʱӦ�����ִ�Сд������The��THE������������
�������Ϊ��������һ�����߶���ո��ַ��ָ��������������ڳ����ϲ��ᳬ��100���ַ�
�������Ӧ��д�ڱ�׼�����
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int counter_the_char(char *string);

int main()
{
    char string[MAX_SIZE];
    printf("������һ�λ���");
    gets(string);
    int numbers = counter_the_char(string);
    printf("����theһ��������%d�Ρ�",numbers);
    return 0;
}

int counter_the_char(char *string)
{
    int counter = 0;
    const char group[] = " \n\r\f\t\v";
    char *temp = strtok(string,group);
    while (temp!=NULL){
        //printf("%s\n",temp);
        //printf("%d\n",strcmp(temp,"the"));
        if (strcmp(temp,"the") == 0){
            counter++;
        }
        temp = strtok(NULL,group);
    }
    return counter;
}
