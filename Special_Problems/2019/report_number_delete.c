/*
N个人围成一圈报数，从第一个人开始依次报1,2,3，报到3的那个人被踢出队列，重新从下一个人开始报数
如此循环往复，直到剩下最后一个人，编写程序输出最后剩下的那个人
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);
    int numbers[number];
    int *p = numbers;
    //先给这个数组赋值
    int i;
    for (i=0;i<number;i++){
        *(p+i) = (i+1);
    }
    /*
    for (int j=0;j<number;j++){
        printf("%d ",numbers[j]);
    }
    */
    int times = 0;
    int count = 0;
    i=0;
    while (times < number-1){
        if (*(p+i) != 0){
            count++;
        }
        if (count == 3){
            *(p+i) = 0;
            count = 0;
            times++;
        }
        i++;
        if (i==number) i = 0;
    }
    for (int j=0;j<number;j++){
        printf("%d ",numbers[j]);
    }
    while (*p == 0) p++;
    printf("%d\n",*p);
    return 0;
}
