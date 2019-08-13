/*
求100以内的质数
给出最简单的算法，以后考虑给出一些计算素数更加快速的方法
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

void prime_function1(int);
//void prime_function2(int);

void prime_function1(int number){
    //int result[MAX_SIZE];
    int count = 0;
    printf("2 ");
    for (int i = 3; i < number; i++){
        for (int temp=1; temp <= i; temp ++){
            if (i % temp == 0){
                count += 1;
            }
        }
        if (count == 2){
            printf("%d ",i);
        }
        count = 0;
    }

}

int main()
{
    int number = 0;
    scanf("%d",&number);
    prime_function1(number);
    return 0;
}
