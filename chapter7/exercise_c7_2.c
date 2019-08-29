/*
两个整型值M和N（M和N均大于0）的最大公约数可以按照下面的方法计算
           M % N = 0:  N
gcd(M,N) =
           M % N = R,R>0  gcd(N,R)
编写程序gcd()，接受两个参数，并返回这两个参数的最大公约数，如果这两个参数中的任意一个不大于零，函数应该返回零
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int m,int n);

int main()
{
    int m;
    int n;
    printf("请输入两个数并以空格隔开：");
    scanf("%d %d",&m,&n);
    int result;
    result = gcd(m,n);
    printf("%d和%d的最大公约数为：%d",m,n,result);
    return 0;
}

int gcd(int m, int n){
    if (m <= 0 || n <= 0){
        return 0;
    }
    if (m % n == 0){
        return n;
    }
    else{
        if (m%n > 0){
            return gcd(n,m%n);
        }
    }
}
