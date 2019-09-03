/*
编写一个函数，函数原型如下：
int count_chars(char const *str, char const *chars);
函数应该在第一个参数中进行查找，并返回匹配第二个参数所包含的字符的数量
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count_chars(char const *str, char const *chars);

int main()
{
    char const str_1[] = "abcds";
    char const str_2[] = "acdwqerr";
    int numbers = 0;
    numbers = count_chars(str_1,str_2);
    printf("%d",numbers);
    return 0;
}

int count_chars(char const *str, char const *chars)
{
    char *temp_1;
    char *temp_2;
    int counter = 0;
    for (temp_1 = str; *temp_1 != '\0'; temp_1++){
        for (temp_2 = chars; *temp_2 != '\0'; temp_2++){
            if (*temp_1 == *temp_2){
                counter++;
            }
        }
    }
    return counter;
}
