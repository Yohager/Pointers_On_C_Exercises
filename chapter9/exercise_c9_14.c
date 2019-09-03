/*
接exercise_c9_12和exercise_c9_13
编写函数：void decrypt(char *data, char const *key);
接受一个加过密的字符串为参数，其任务是重现原来的信息（用于解密）
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
    //将所有的大写字母都改写为小写字母，同时检测异常出现字符串中不是字母的元素
    for (temp_1=key; (character = *temp_1)!='\0';temp_1++){
        if (!islower(character)){
            if (!isupper(character)){
                return 0;
            }
            *temp_1 = tolower(character);
        }
    }
    //消除字符数组中的重复元素
    char *temp_2;
    for (temp_1=key; (character = *temp_1)!= '\0';){
        temp_2 = ++temp_1;
        while ((temp_2 = strchr(temp_2,character)) != NULL){
            strcpy(temp_2,temp_2+1);
        }
    }
    //将字母表中其余元素加入到key这个字符数组中去
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
