/*
埃氏素数筛选法
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#define MAX_SIZE 1000

void Eratosthenes(int numbers[], int sign[]);

int main()
{
    int numbers[MAX_SIZE];
    int sign[MAX_SIZE];
    //char *temp;
    //int examer;
    //首先将所有的temp的值设置为1
    /*
    for (temp=numbers; temp < &numbers[MAX_SIZE];){
        *temp++ = 1;
    }
    */
    for (int k=0; k < MAX_SIZE; k++){
        numbers[k] = k+1;
        sign[k] = 1;
    }
    Eratosthenes(numbers,sign);
    for (int n=0; n<MAX_SIZE; n++){
        if (sign[n] == 1){
            printf("%d ",numbers[n]);
        }
    }
    return 0;
}

void Eratosthenes(int numbers[], int sign[]){
   for (int i = 2; i < MAX_SIZE; i++){
        for (int j=0; j< MAX_SIZE; j++){
            if (numbers[j] % i == 0){
                sign[j] = 0;
            }
        }
   }
}
