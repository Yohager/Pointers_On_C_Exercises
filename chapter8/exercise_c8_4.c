/*
在exercise8.3的基础上，修改函数，允许函数接受一个任意大小的方阵，检测是否为单位矩阵
函数原型：
int identity_matrix(int *matrix, int size);
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FALSE 0
#define TRUE  1


int identity_matrix(int *matrix, int size);

int main()
{
    int size;
    int matrix[][] = {};
    return identity_matrix(matrix,size);
}

int identity_matrix(int *matrix,int size)
{
    int i;
    int j;
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (*matrix++ != (i==j)){
                return FALSE;
            }
        }
    }
    return TRUE;
}
