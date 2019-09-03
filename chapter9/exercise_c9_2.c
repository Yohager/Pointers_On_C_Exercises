/*
编写一个名叫my_strlen的函数，它类似于strlen函数，能够处理由于strn--函数而创建的未以NUL字节结尾的字符串，需要向函数传递一个参数，它的值就是保存了需要进行长度测试的字符串的数组的长度
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

size_t my_strlen(char const *string, int size);

size_t my_strlen(char const *string, int size)
{
    register size_t length;
    for (length=0; length < size; length++){
        if (*string++ == '\0'){
            break;
        }
    }
    return length;
}
