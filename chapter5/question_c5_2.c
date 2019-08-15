#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func(void);

int main()
{
    int answer;
    answer = func() - func() * func();
    printf("%d\n",answer);
    return 0;
}

int func(void){
    static int counter = 1;
    return ++ counter;
}
