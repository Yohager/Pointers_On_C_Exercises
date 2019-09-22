/*
使用递归法将一个整数n转换为字符串
例如：输入483，输出“483”
n的位数不确定，可以是任意位的整数
*/

#include<stdio.h>
#include<stdlib.h>

void recursion_int2str(int n);

int main()
{
    int number;
    printf("Please input one integer:");
    scanf("%d",&number);
    //如果number小于0需要将这个数转换一下
    if (number < 0){
        putchar('-');
        number = -number;
    }
    recursion_int2str(number);
    return 0;
}

void recursion_int2str(int n)
{
    int m = n/10;
    if (m != 0){
        recursion_int2str(m);
    }
    printf("%c",'0'+n%10);
}
