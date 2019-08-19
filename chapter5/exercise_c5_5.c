/*
编写一个函数，把一个给定的值存储到一个整数中指定的几位
int store_bit_field(int original_value,
                    int value_to_store,
                    unsigned starting_bit,
                    unsigned ending_bit);
假定整数中的位是从右向左编号，因此起始位置不会小于结束位置
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
    //第一步：定义无符号的掩码，本机是32位
    unsigned mask = ~0;
    mask >>= CHAR_BIT*(sizeof(int)) - (starting_bit - ending_bit + 1);
    mask <<= ending_bit;
    //满足staring_bit不越界同时大于ending_bit才进行满足输入参数的基本条件
    if (starting_bit < CHAR_BIT*(sizeof(int)) && starting_bit >= ending_bit){
        //第二步：使用掩码的反码和原值进行AND操作
        original_value &= ~mask;
        //第三步：将新值左移ending_bit的位数使之对齐
        value_to_store <<= ending_bit;
        //第四步：将左移之后的新值与mask掩码进行AND操作
        value_to_store &= mask;
        //第五步：将上一步的结果值与原值进行位or操作并返回结果
        original_value |= value_to_store;
        return original_value;
    }
    else{
        return original_value;
    }
}
