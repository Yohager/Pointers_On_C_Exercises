/*
计算个人税收
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float single_tax(float income);

int main()
{
    float x;
    printf("输入个人收入：");
    scanf("%f",&x);
    float y;
    y = single_tax(x);
    printf("个人纳税额为：%f",y);
    return 0;
}

float single_tax(float income)
{
    if (income < 0){
        return 0;
    }
    if (0 < income <= 23350){
        return income*0.15;
    }
    else if (23350 < income <= 56550){
        return 3502.5 + 0.28*(income - 23350);
    }
    else if (56550 < income <= 117950){
        return 12798.5 + 0.31*(income - 56550);
    }
    else if (117950 < income <= 256500){
        return 31832.5 + 0.36*(income - 117950);
    }
    else{
        return 81710.5 + 0.396*(income - 256500);
    }
}
