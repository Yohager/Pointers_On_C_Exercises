/*
编写一个函数从标准输入读取一个字符串，把字符串复制到动态分配的内存中并返回该字符串的拷贝
这个函数不应该对输入的字符串的长度做任何的限制
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_copy_function(char *string);

int main()
{
    char str_1[1000];
    printf("请输入需要拷贝的字符串：");
    gets(str_1);
    char *new_str;
    new_str = my_copy_function(str_1);
    printf("%s\n",new_str);
    return 0;
}

char *my_copy_function(char *string)
{
    int length = strlen(string);
    char *new_string;
    new_string = malloc(length*sizeof(char));
    if (new_string == NULL) return NULL;
    strcpy(new_string,string);
    return new_string;
}
