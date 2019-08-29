/*
函数原型：int ascii_to_integer(char *string);
这个字符串参数必须包含一个或者多个数字，函数应该把这些数字字符转换为整数并返回这个整数。如果字符串参数包含了任何非数字字符，函数就返回零。
提示：每发现一个数字，将当前的值乘以10并把这个值和新数字所代表的的值相加
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ascii_to_integer(char *string);

int main()
{
    char string[] = "12343";
    int result;
    result = ascii_to_integer(string);
    printf("%d",result);
    return 0;
}

int ascii_to_integer(char *string){
    int total_value = 0;
    while (*string >= '0' && *string <= '9'){
        total_value *= 10;
        total_value += *string - '0';
        string++;
    }
    if (*string != '\0'){
        return 0;
    }
    return total_value;
}
