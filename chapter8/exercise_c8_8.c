/*
八皇后问题
编写一个程序找到八皇后问题的所有解
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//用于在棋盘上放置皇后
void put_queen(int i, int j);
//用于检查当前的位置是否可以放置
int check_position(int i, int j);

//定义全局性的变量：chess表示整个棋盘用一个二维数组表示
//solutions表示一共有多少种满足条件的摆放方式
int chess[8][8];
int solutions = 0;

int main()
{
    put_queen(0,0);
    printf("%d",solutions);
    return 0;
}

void put_queen(int i, int j)
{
    if (j >= 8){
        return;
    }
    if (check_position(i,j) == 1){
        chess[i][j] = 1;
        if (i == 7){
            solutions++;
        }
        else{
            //尝试下一行
            put_queen(i+1,0);
        }
    }
    //经过上面的判断发现并不能在(i,j)这个位置放置一个棋子，则我们直接置这个位置为0
    chess[i][j] = 0;
    put_queen(i,j+1);
}

int check_position(int i, int j)
{
    int k;
    //检查第i行是否有皇后
    for (k=0; k<8; k++){
        if (chess[i][k] == 1) return 0;
    }
    //检查第j列是否有皇后
    for (k=0; k<8; k++){
        if (chess[k][j] == 1) return 0;
    }
    //检查对角线
    for (k=-8; k<=8; k++){
        if (i+k >= 0 && i+k < 8 && j+k >= 0 && j+k < 8){
            if (chess[i+k][j+k] == 1){
                return 0;
            }
        }
        if (i-k >= 0 && i-k < 8 && j+k >= 0 && j+k < 8){
            if (chess[i-k][j+k] == 1){
                return 0;
            }
        }
    }
    return 1;
}

