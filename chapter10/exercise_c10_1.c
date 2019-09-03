/*
当你拨打长途电话时，电话公司保存的信息包括你拨打的电话的日期和时间
还包括三个电话：你使用的电话，你呼叫的那个电话，你付账的那个电话
这些电话号码的每一个都是由三个部分组成:区号，交换台，站号码
为这些记账信息编写一个结构声明
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct phone_number{
    int area;
    int exchange;
    int station;
}phone_nubmer;

struct billing_list{
    int year;
    int month;
    int day;
    int time;
    phone_number you_used;
    phone_number you_addressed;
    phone_nubmer you_payed;
};
