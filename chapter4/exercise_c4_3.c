/*
判断三角形的类型
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("请输入三个整数并以逗号隔开：");
    scanf("%d,%d,%d",&a,&b,&c);
    if ((a+b) <= c || (a+c) <= b || (b+c) <= a){
        printf("输入的三个数字无法构成三角形！");
        return 0;
    }
    if (a==b && b==c){
        printf("等边三角形");
    }
    else if (a==b || b==c || a==c ){
        printf("等腰三角形");
    }
    else{
        printf("普通三角形");
    }
    return 0;
}
