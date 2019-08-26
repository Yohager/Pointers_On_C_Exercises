/*
埃氏素数筛选法
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#define MAX_SIZE 1000

void common_sieve(int numbers[], int max_number);
void Eratosthenes(int numbers[], int max_number);

int main()
{
    //通常情况下的素数筛选法
    int numbers[MAX_SIZE];
    int max_number = 100;
    int *temp;
    //首先将所有的temp的值设置为1
    for (temp=numbers; temp < &numbers[MAX_SIZE];){
        *temp++ = 1;
    }
    common_sieve(numbers, max_number);
    for (int k=0; k < max_number; k++){
        //printf("%d ",numbers[k]);
        if (numbers[k] == 1){
            printf("%d ",k);
        }
    }
    printf("\n");
    int numbers_1[MAX_SIZE];
    int *temp_1;
    for (temp_1=numbers_1; temp_1 < &numbers_1[MAX_SIZE];){
        *temp_1++ = 1;
    }
    Eratosthenes(numbers_1, max_number);
    for (int k=0; k < max_number; k++){
        //printf("%d ",numbers_1[k]);
        if (numbers_1[k] == 1){
            printf("%d ",k);
        }
    }
    //埃氏素数筛选法

    return 0;
}

//最简单的素数筛选法
void common_sieve(int numbers[], int max_number){
    numbers[0] = 0;
    numbers[1] = 0;
    //numbers为一个全元素等于1的数组，下面修改numbers的数组中的元素为0表示不是素数
    for (int i=2; i < max_number; i++){
        int count = 0;
        for (int j=1; j <= i; j++){
            if (i % j == 0){
                count += 1;
            }
        }
        if (count > 2){
            numbers[i] = 0;
        }
    }
}

//埃氏素数筛选法
/*
埃氏素数筛选法的流程：
构建一个sign数组，初始化为全1的数组
从2开始，遍历一遍所有能够被2整除的整数，将sign[i]全部置为0
重复计算3,4,……直到最大的元素
最终sign数组中为1的元素都为素数
*/
void Eratosthenes(int numbers[], int max_number){
    numbers[0] = 0;
    numbers[1] = 0;
    int max_limit = (int)sqrt((double)max_number);
    //printf("%d\n",max_limit);
    for (int k = 2; k < max_limit; k++){
        for (int n=0; n < max_number; n++){
            if (numbers[n] == 1){
                if (n % k == 0 && n != k){
                    numbers[n] = 0;
                }
            }
        }
    }
}
