/*
对数据加密的方法共需要实现三个函数（12,13,14）
exercise12要求实现加密的字典
函数原型：int prepare_key(char *key);
接受一个字符串参数，内容是需要使用的秘钥单词，函数根据上面的描述转换为一个包含编好码的字符数组
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
    //char *temp_2;
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
