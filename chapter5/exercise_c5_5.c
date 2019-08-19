/*
��дһ����������һ��������ֵ�洢��һ��������ָ���ļ�λ
int store_bit_field(int original_value,
                    int value_to_store,
                    unsigned starting_bit,
                    unsigned ending_bit);
�ٶ������е�λ�Ǵ��������ţ������ʼλ�ò���С�ڽ���λ��
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int store_bit_field(int origninal_value, int value_to_store, unsigned starting_bit, unsigned ending_bit);

int main()
{
    int original_value = 0xffff;
    int value_to_store = 0x123;
    unsigned starting_bit = 13;
    unsigned ending_bit = 9;
    int result;
    result = store_bit_field(original_value,value_to_store,starting_bit,ending_bit);
    printf("%x",result);
    return 0;
}

int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit){
    //��һ���������޷��ŵ����룬������32λ
    unsigned mask = ~0;
    mask >>= CHAR_BIT*(sizeof(int)) - (starting_bit - ending_bit + 1);
    mask <<= ending_bit;
    //����staring_bit��Խ��ͬʱ����ending_bit�Ž���������������Ļ�������
    if (starting_bit < CHAR_BIT*(sizeof(int)) && starting_bit >= ending_bit){
        //�ڶ�����ʹ������ķ����ԭֵ����AND����
        original_value &= ~mask;
        //������������ֵ����ending_bit��λ��ʹ֮����
        value_to_store <<= ending_bit;
        //���Ĳ���������֮�����ֵ��mask�������AND����
        value_to_store &= mask;
        //���岽������һ���Ľ��ֵ��ԭֵ����λor���������ؽ��
        original_value |= value_to_store;
        return original_value;
    }
    else{
        return original_value;
    }
}
