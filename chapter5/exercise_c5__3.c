/*
编写函数：unsigned int reverse_bits(unsigned int value);
将value的二进制模式从左到右变换一下之后的值
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

unsigned int reverse_bits(unsigned int value);

int main()
{
    unsigned int value;
    //printf("%d",sizeof(value));
    printf("enter one unsigned integer: ");
    scanf("%d",&value);
    unsigned int answer_1;
    answer_1 = reverse_bits(value);
    printf("the result of the reverse function is:%d",answer_1);
    return 0;
}

unsigned int reverse_bits(unsigned int value){
    unsigned int answer = 0;
    unsigned int i;
    for (i=1; i!=0; i<<=1){
        answer <<= 1;
        if (value & 1){
            answer |= 1;
        }
        value >>= 1;
    }
    return answer;
}
