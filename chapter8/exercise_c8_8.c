/*
�˻ʺ�����
��дһ�������ҵ��˻ʺ���������н�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�����������Ϸ��ûʺ�
void put_queen(int i, int j);
//���ڼ�鵱ǰ��λ���Ƿ���Է���
int check_position(int i, int j);

//����ȫ���Եı�����chess��ʾ����������һ����ά�����ʾ
//solutions��ʾһ���ж��������������İڷŷ�ʽ
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
            //������һ��
            put_queen(i+1,0);
        }
    }
    //����������жϷ��ֲ�������(i,j)���λ�÷���һ�����ӣ�������ֱ�������λ��Ϊ0
    chess[i][j] = 0;
    put_queen(i,j+1);
}

int check_position(int i, int j)
{
    int k;
    //����i���Ƿ��лʺ�
    for (k=0; k<8; k++){
        if (chess[i][k] == 1) return 0;
    }
    //����j���Ƿ��лʺ�
    for (k=0; k<8; k++){
        if (chess[k][j] == 1) return 0;
    }
    //���Խ���
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

