/*
从标准输入读入字符，非字母字符正常输出，字母字符加密输出
加密方式：
每个字母被修改为在字母表上距离其13个位置的字母
A => N
B => O
Z => M
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("please input one str for encrypt: ");
    gets(ch);
    int length = strlen(ch);
    for (int i=0; i<length; i++){
        if (ch[i] >= 'a' && ch[i] <= 'z'){
            if (ch[i] + 13 <= 'z'){
                ch[i] += 13;
            }
            else{
                ch[i] -= 13;
            }
        }
        if (ch[i] >= 'A' && ch[i] <= 'Z'){
            if (ch[i] + 13 <= 'Z'){
                ch[i] += 13;
            }
            else{
                ch[i] -= 13;
            }
        }
    }
    puts(ch);
    return 0;
}
