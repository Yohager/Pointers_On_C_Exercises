/*
自己尝试编写一个calloc函数函数内部使用malloc函数获取内存
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void *my_calloc(size_t num_elements, size_t element_size);

void *my_calloc(size_t num_elements, size_t element_size)
{
   char *temp;
   temp = malloc(num_elements * element_size);
   //一定记住使用了malloc函数必须检查是否内存分配成功
   if (temp != NULL){
        char *ptr;
        ptr = temp;
        while (--(num_elements*element_size) >= 0){
            *ptr++ = '\0';
        }
   }
   return temp;
}
