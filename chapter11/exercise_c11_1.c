/*
�Լ����Ա�дһ��calloc���������ڲ�ʹ��malloc������ȡ�ڴ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void *my_calloc(size_t num_elements, size_t element_size);

void *my_calloc(size_t num_elements, size_t element_size)
{
   char *temp;
   temp = malloc(num_elements * element_size);
   //һ����סʹ����malloc�����������Ƿ��ڴ����ɹ�
   if (temp != NULL){
        char *ptr;
        ptr = temp;
        while (--(num_elements*element_size) >= 0){
            *ptr++ = '\0';
        }
   }
   return temp;
}
