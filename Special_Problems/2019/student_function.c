/*
��һ��student�ṹ������Students[]
�ṹ�������������ݣ�num,age,height
����Ҫ�Ը�������������������num�����Ƚ�age�����age�����ȼ�height
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
    int num;
    int age;
    int height;
}Stu;

int main()
{
    int count;
    printf("����ѧ����������");
    scanf("%d",&count);
    Stu Students[count];
    for (int i=0;i<count;i++){
        scanf("%d %d %d",&Students[i].num,&Students[i].age,&Students[i].height);
    }
    //�ṹ�����鹹���ɹ�
    Stu temp;
    for(int j=0;j<count;j++){
        for (int k=j;k<count;k++){
            if (Students[j].num > Students[k].num){
                temp = Students[j];
                Students[j] = Students[k];
                Students[k] = temp;
            }
            else if (Students[j].num == Students[k].num){
                if (Students[j].age > Students[k].age){
                    temp = Students[j];
                    Students[j] = Students[k];
                    Students[k] = temp;
                }
                else if (Students[j].age == Students[j].age){
                    if (Students[j].height > Students[k].height){
                        temp = Students[j];
                        Students[j] = Students[k];
                        Students[k] = temp;
                    }
                }
            }
        }
    }
    printf("\n");
    for (int p=0;p<count;p++){
        printf("��%d��stu: ",p+1);
        printf("%d %d %d",Students[p].num,Students[p].age,Students[p].height);
        printf("\n");
    }
}
