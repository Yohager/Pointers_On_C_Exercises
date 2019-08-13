/*
判断年份是否为闰年
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int number = 0;
    printf("Please enter one number of year: ");
    scanf("%d",&number);
    if (number % 4 == 0){
        if (number % 100 == 0 && number % 400 != 0){
            printf("Year %d is not a leap year!",number);
        }
        else{
        printf("Year %d is a leap year!",number);
        }
    }
    else{
         printf("Year %d is not a leap year!",number);
    }
    return 0;
}
