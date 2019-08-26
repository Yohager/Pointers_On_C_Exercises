/*
��������ɸѡ��
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
    //ͨ������µ�����ɸѡ��
    int numbers[MAX_SIZE];
    int max_number = 100;
    int *temp;
    //���Ƚ����е�temp��ֵ����Ϊ1
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
    //��������ɸѡ��

    return 0;
}

//��򵥵�����ɸѡ��
void common_sieve(int numbers[], int max_number){
    numbers[0] = 0;
    numbers[1] = 0;
    //numbersΪһ��ȫԪ�ص���1�����飬�����޸�numbers�������е�Ԫ��Ϊ0��ʾ��������
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

//��������ɸѡ��
/*
��������ɸѡ�������̣�
����һ��sign���飬��ʼ��Ϊȫ1������
��2��ʼ������һ�������ܹ���2��������������sign[i]ȫ����Ϊ0
�ظ�����3,4,����ֱ������Ԫ��
����sign������Ϊ1��Ԫ�ض�Ϊ����
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
