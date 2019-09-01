/*
实现矩阵的乘法运算 x*y的A矩阵和y*z的B矩阵乘法运算后得到x*z的C矩阵
函数原型：
void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z);
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z);

int main()
{
    int x=3;
    int y=2;
    int z=4;
    int matrix_1[3][2]={
    {2,-6}, {3,5}, {1,-1}
    };
    int matrix_2[2][4]={
    {4,-2,-4,-5},{-7,-3,6,7}
    };
    int result_matrix[x][z];
    matrix_multiply(matrix_1,matrix_2,result_matrix,x,y,z);
    for (int k = 0; k < x; k++){
        for (int n = 0; n < z; n++){
            printf("%d ",result_matrix[k][n]);
        }
        printf("\n");
    }
}

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
{
    int *m1p;
    int *m2p;
    int i;
    int j;
    int k;
    for (i=0; i<x; i++){
        for (j=0; j<z; j++){
            m1p = m1 + i*y;
            m2p = m2 + j;
            *r = 0;
            for (k=0; k<y; k++){
                *r += *m1p * *m2p;
                m1p += 1;
                m2p += z;
            }
            r++;
        }
    }
}
