/*
���㲦��;�绰ʱ���绰��˾�������Ϣ�����㲦��ĵ绰�����ں�ʱ��
�����������绰����ʹ�õĵ绰������е��Ǹ��绰���㸶�˵��Ǹ��绰
��Щ�绰�����ÿһ�������������������:���ţ�����̨��վ����
Ϊ��Щ������Ϣ��дһ���ṹ����
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
