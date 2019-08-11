#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

int main()
{
    char str_1[MAX_SIZE];
    signed char checksum = -1;
    signed char checksum_2 = -1;
    gets(str_1);
    printf("%s",str_1);
    int length = strlen(str_1);
    for(int index = 0; index < length; index++){
        checksum += str_1[index];
    }
    printf("输入的字符串为：%s\n",str_1);
    printf("checksum的值为：%d\n",checksum);
    int j = 0;
    while (str_1[j] != '\0'){
        checksum_2 += str_1[j];
        j += 1;
    }
    printf("checksum_2的值为：%d\n",checksum_2);
    return 0;

}
