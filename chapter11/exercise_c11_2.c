/*
��дһ���������ӱ�׼�����ȡһ����������Щֵ�洢��һ����̬����������в������������
����ͨ��EOF�ж������б��Ƿ����������ĵ�һ���������������ֵ�ĸ��������ĺ��������Щ����ֵ
*/
#include<stdio.h>
#include<stdlib.h>
#define INIT_SIZE 100

int *my_function(void);

int *my_function(void)
{
    int *array;
    int size = INIT_SIZE;
    int count = 0;
    int value;
    //��Ϊarray�������һ����ʼ�ڴ�
    array = malloc(size*sizeof(int));
    if (array == NULL){
        return NULL;
    }
    while (scanf("%d ",&value) == 1){
        count += 1;
        if (count > size){
            size += INIT_SIZE;
            array = realloc(array,(size+1)*sizeof(int));
            if (array == NULL) return NULL;
        }
        array[count] = value;
    }
    if (count < size){
        array = realloc(array,(count+1)*sizeof(int));
        if (array == NULL) return NULL;
    }
    array[0] = count;
    return array;

}
