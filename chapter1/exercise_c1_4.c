#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000
int main()
{
    char file_content[MAX_SIZE];
    char max_file_content[MAX_SIZE];
    int length = 0;
    FILE *fp = fopen("exercise_c1_4_testfile.txt","r");
    if (fp == NULL){
        printf("Fail to open the file!");
        return 0;
    }
    while (!feof(fp)){
        fgets(file_content,MAX_SIZE,fp);
        //��fgets�������ȡ��ÿһ�����Ļ��з�������Ҫ���ǽ����з�ȥ��
        file_content[strlen(file_content)-1] = '\0';
        //printf("%s����Ϊ��%d\n",file_content,strlen(file_content));
        if (strlen(file_content) >= length){
            length = strlen(file_content);
            strcpy(max_file_content,file_content);
        }
    }
    printf("%s\n",max_file_content);
    //printf("%d",length);
    fclose(fp);
    return 0;
}
