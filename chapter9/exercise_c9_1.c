/*
编写一个程序，从标准输入读入一些字符，统计各类字符所占比例
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 1000


int main()
{
    char string[MAX_SIZE];
    printf("输入一些ctype.h中的标准字符：");
    scanf("%s",&string);
    int length = strlen(string);
    float counter[7] = {0};
    char *temp = string;
    for (; *temp != '\0'; temp++){
        if (iscntrl(*temp) != 0){
            counter[0]+=1;
        }
        else if (isspace(*temp) != 0){
            counter[1]+=1;
        }
        else if (isdigit(*temp) != 0){
            counter[2]+=1;
        }
        else if (islower(*temp) != 0){
            counter[3]+=1;
        }
        else if (isupper(*temp) != 0){
            counter[4]+=1;
        }
        else if (ispunct(*temp) != 0){
            counter[5]+=1;
        }
        else if (isprint(*temp) == 0){
            counter[6]+=1;
        }
    }
    for (int i=0; i < 7; i++){
        counter[i] = counter[i] / (float)length;
        printf("%f ",counter[i]);
    }
    return 0;
}
