/*
һ���ַ�����#��β�����������ֺͷ������ַ���
�磺uestc2015jsj320#������������������Ϊһ�����壨�����-1��ǣ����δ������������arr��
���罫2015����arr[0]��320����arr[1]
��д������ɸ�����
����ԭ�ͣ�
int find_int(int *arr, char *pc);
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define MAX_SIZE 100

int find_int(int *arr, char *pc);

int main()
{
    char string[MAX_SIZE] = "uestc2015jsj320#";
    int arr[MAX_SIZE] = {0};
    //int result = find_int(arr, string);
    /*
    if (result == 1){
        printf("%d",arr[0]);
    }
    */
    char *begin = &string[5];
    char *end = &string[8];
    int test = str2int(begin,end);
    printf("%d\n",test);
    return 0;
}

int find_int(int *arr, char *pc)
{
    int index = 0;
    while (1){
        char *begin = pc;
        char *end;
        while (*begin != '#'){
            if (!isdigit(*begin)){
                begin++;
            }
            else{
                break;
            }
        }
        end = begin;
        while (*end+1 != '#' && *end+1 >= '0' && *end+1 <= '9'){
            end++;
        }
        arr[index++] = str2int(begin,end);
    }

    return 0;
}

int str2int(char *begin, char *end)
{
    int result=0;
    int length = end - begin;
    int i=length;
    for (char *temp=begin;temp<=end;temp++){
        printf("%d\n",*temp-'0');
        result += ((int)pow(10,i))*(*temp-'0');
        //printf("%d\n",(int)pow(10,i));
        i--;
    }
    return result;
}
