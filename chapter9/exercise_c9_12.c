/*
�����ݼ��ܵķ�������Ҫʵ������������12,13,14��
exercise12Ҫ��ʵ�ּ��ܵ��ֵ�
����ԭ�ͣ�int prepare_key(char *key);
����һ���ַ�����������������Ҫʹ�õ���Կ���ʣ������������������ת��Ϊһ�������������ַ�����
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int prepare_key(char *key);

int main()
{
   char key[26];
   gets(key);
   int a;
   a = prepare_key(key);
   for (int i=0; i < strlen(key); i++){
        printf("%c",key[i]);
   }
   return 0;
}

int prepare_key(char *key)
{
    if (*key == '\0') return 0;
    char *temp_1;
    char *temp_2;
    int character;
    //�����еĴ�д��ĸ����дΪСд��ĸ��ͬʱ����쳣�����ַ����в�����ĸ��Ԫ��
    for (temp_1=key; (character = *temp_1)!='\0';temp_1++){
        if (!islower(character)){
            if (!isupper(character)){
                return 0;
            }
            *temp_1 = tolower(character);
        }
    }
    //�����ַ������е��ظ�Ԫ��
    //char *temp_2;
    for (temp_1=key; (character = *temp_1)!= '\0';){
        temp_2 = ++temp_1;
        while ((temp_2 = strchr(temp_2,character)) != NULL){
            strcpy(temp_2,temp_2+1);
        }
    }
    //����ĸ��������Ԫ�ؼ��뵽key����ַ�������ȥ
    for (character = 'a'; character <= 'z'; character++){
        if (strchr(key,character) == NULL){
            *temp_1++ = character;
            *temp_1 = '\0';
        }
    }
    return 1;
}
