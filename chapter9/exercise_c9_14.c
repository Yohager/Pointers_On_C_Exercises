/*
��exercise_c9_12��exercise_c9_13
��д������void decrypt(char *data, char const *key);
����һ���ӹ��ܵ��ַ���Ϊ������������������ԭ������Ϣ�����ڽ��ܣ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int prepare_key(char *key);
void encrypt(char *data, char const *key);
void decrypt(char *data, char const *key);

int main()
{
   char key[27];
   gets(key);
   int a;
   char data[] = "ATTACK AT DAWN";
   a = prepare_key(key);
   printf("%s\n",key);
   encrypt(data,key);
   printf("%s\n",data);
   decrypt(data,key);
   printf("%s\n",data);
   return 0;
}

int prepare_key(char *key)
{
    if (*key == '\0') return 0;
    char *temp_1;
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
    char *temp_2;
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

void encrypt(char *data, char const *key)
{
    int character;
    for (; (character = *data)!= '\0'; data++){
        if (islower(character)){
            *data = key[character - 'a'];
        }
        else if (isupper(character)){
            *data = toupper(key[character - 'A']);
            //printf("%c ",*data);
        }
    }
}

static char alphbat[] = "abcdefghijklmnopqrstuvwxyz";
void decrypt(char *data, char const *key)
{
    int character;
    for (; (character = *data) != '\0'; data++){
        if (islower(character)){
            *data = alphbat[strchr(key,character) - key];
        }
        else if (isupper(character)){
            *data = toupper(alphbat[strchr(key,tolower(character)) - key]);
        }
    }
}
