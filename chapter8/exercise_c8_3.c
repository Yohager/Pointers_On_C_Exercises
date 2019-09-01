/*
检测一个10*10的矩阵是否为单位阵
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FALSE 0
#define TRUE  1

int identity_matrix(int matrix[][10]);

int main()
{
    int matrix[10][10] = {
        {1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1},
    };
    return identity_matrix(matrix);
}

int identity_matrix(int matrix[][10])
{
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i == j){
                if (matrix[i][j] != 1){
                    return FALSE;
                }
            }
            else{
                if (matrix[i][j] != 0){
                    return FALSE;
                }
            }
        }
    }
    return TRUE;
}
