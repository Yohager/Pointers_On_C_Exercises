/*
��exercise8.3�Ļ����ϣ��޸ĺ���������������һ�������С�ķ��󣬼���Ƿ�Ϊ��λ����
����ԭ�ͣ�
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
