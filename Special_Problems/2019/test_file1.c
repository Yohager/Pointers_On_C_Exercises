#include<stdio.h>
int function(int a, int b, int c);

int main()
{
    int i = 3;
    int p;
    p = function(i++,i,i++);
    return 0;
}

int function(int a, int b, int c){
    printf("%d,%d,%d",a,b,c);
    return a;
}
