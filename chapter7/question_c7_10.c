/*
计算Fibonacci递归方法中调用函数本身的次数
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Fibonacci(int n);
static int count;

int main()
{
    count = 0;
    int x;
    printf("输入一个正整数：");
    scanf("%d",&x);

    Fibonacci(x);
    printf("递归程序共调用函数%d次.",count);
    return 0;
}

int Fibonacci(int n){
    count++;
    if (n==1){
        return 1;
    }
    else if (n==2){
        return 1;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}
