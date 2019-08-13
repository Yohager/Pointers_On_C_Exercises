/*
平方根的近似值
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int number = 0;
    scanf("%d",&number);
    float result_value = 1;
    float temp;
    for (int i = 0; i<100; i++){
        temp = result_value;
        result_value = (result_value + number/result_value)/2;
        printf("temp: %f \n",temp);
        printf("result: %f \n",result_value);
        if (fabs(temp - result_value) < 0.00001){
            break;
        }
    }
    return 0;
}
