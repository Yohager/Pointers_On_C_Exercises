/*
N����Χ��һȦ�������ӵ�һ���˿�ʼ���α�1,2,3������3���Ǹ��˱��߳����У����´���һ���˿�ʼ����
���ѭ��������ֱ��ʣ�����һ���ˣ���д����������ʣ�µ��Ǹ���
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);
    int numbers[number];
    int *p = numbers;
    //�ȸ�������鸳ֵ
    int i;
    for (i=0;i<number;i++){
        *(p+i) = (i+1);
    }
    /*
    for (int j=0;j<number;j++){
        printf("%d ",numbers[j]);
    }
    */
    int times = 0;
    int count = 0;
    i=0;
    while (times < number-1){
        if (*(p+i) != 0){
            count++;
        }
        if (count == 3){
            *(p+i) = 0;
            count = 0;
            times++;
        }
        i++;
        if (i==number) i = 0;
    }
    for (int j=0;j<number;j++){
        printf("%d ",numbers[j]);
    }
    while (*p == 0) p++;
    printf("%d\n",*p);
    return 0;
}
