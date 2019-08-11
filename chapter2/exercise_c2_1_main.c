#include<stdio.h>
#include<stdlib.h>
#include "exercise_c2_1_increment.c"
#include "exercise_c2_1_negate.c"

extern int increment(int);
extern int negate(int);
int main()
{
    int a = 10;
    int b = 0;
    int c = -10;
    printf("%d,%d",increment(a),negate(a));
    return 0;
}
