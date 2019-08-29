/*
hermite polynomials 厄密多项式
n <= 0: 1
n = 1: 2x
n >= 2: 2x*f_(n-1)(x) - 2(n-1)*f_(n-2)(x)
写出函数
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int hermite(int n, int x);

int main()
{
    int n;
    int x;
    printf("输入两个正整数并以空格隔开: ");
    scanf("%d %d",&n,&x);
    int result;
    result = hermite(n,x);
    printf("hermite多项式关于n=%d,x=%d的结果为：%d.",n,x,result);
    return 0;
}

int hermite(int n, int x){
    if (n<=0){
        return 1;
    }
    else if (n==1){
        return 2*x;
    }
    else{
        return 2*x*hermite(n-1,x) - 2*(n-1)*hermite(n-2,x);
    }
}
