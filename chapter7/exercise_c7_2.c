/*
��������ֵM��N��M��N������0�������Լ�����԰�������ķ�������
           M % N = 0:  N
gcd(M,N) =
           M % N = R,R>0  gcd(N,R)
��д����gcd()�������������������������������������Լ������������������е�����һ���������㣬����Ӧ�÷�����
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int m,int n);

int main()
{
    int m;
    int n;
    printf("���������������Կո������");
    scanf("%d %d",&m,&n);
    int result;
    result = gcd(m,n);
    printf("%d��%d�����Լ��Ϊ��%d",m,n,result);
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
