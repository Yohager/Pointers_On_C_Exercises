/*
����Fibonacci�ݹ鷽���е��ú�������Ĵ���
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
    printf("����һ����������");
    scanf("%d",&x);

    Fibonacci(x);
    printf("�ݹ���򹲵��ú���%d��.",count);
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
