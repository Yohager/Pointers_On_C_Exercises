/*
编写函数：
void my_strncat(char *dest, char *src, int dest_len);
它用于将src中的字符串连接到dest中原有的字符串的末尾，但它保证不会溢出长度为dest_len的dest数组
和strcat函数不同，这个函数也考虑原先存在于dest数组的字符串长度，因此能够保证不超过数组边界
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strncat(char *dest, char *src, int dest_len);

void my_strncat(char *dest, char *src, int dest_len)
{
    int length;
    length = dest_len - (int)strlen(dest);
    if (length > 0){
        strncat(dest,src,length);
        dest[dest_len - 1] = '\0';
    }
    return dest;
}
