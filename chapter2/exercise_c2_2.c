#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000
int main()
{
    char ch;
    int count_left = 0;
    int count_right = 0;
    FILE *fp = fopen("exercise_c2_2_testfile.txt","r");
    if (fp == NULL){
        printf("Fail to open this file !");
        return 0;
    }
    while(!feof(fp)){
        ch = fgetc(fp);
        if (ch == '{'){
            count_left += 1;
        }
        if (ch == '}'){
            count_right += 1;
        }
    }
    if (count_left == count_right){
        printf("usage of braces is reasonable!");
    }
    else{
        printf("usage of braces is unreasonable, please check!");
    }
    return 0;
}
