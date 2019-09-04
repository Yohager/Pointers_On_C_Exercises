/*
编写一个函数，从标准输入读取一列整数把这些值存储于一个动态分配的数组中并返回这个数组
函数通过EOF判断输入列表是否结束，数组的第一个数是数组包含的值的个数，它的后面就是这些整数值
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
    //先为array数组分配一个起始内存
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
