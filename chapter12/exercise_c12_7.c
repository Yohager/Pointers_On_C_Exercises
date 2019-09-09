/*
��дһ����������һ���µ��ʲ��뵽�������е���������
������������������һ��ָ��list��ָ�룬һ���ַ��������ַ����ٶ�������������
����������ԭ�Ȳ�δ�������������У���Ӧ�ø��Ƶ�һ�鶯̬����Ľڵ㲢���뵽list�У�����ɹ�����1
������ַ���ԭ���Ѿ�������list�л����ַ�������һ������ĸ��ͷ���ַ����������������򷵻�-1
����ά��һ��һ�������ڵ����������ĸΪ������Ķ����������Ե���Ϊ������
*/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>
#include<ctype.h>

typedef struct WORD{
    char *word;
    struct WORD *next;
}Word;

typedef struct list{
    char letter;
    struct list *next;
    Word *wordlist;
}List;

int concordance_insert(List **listp, char *the_word);

int concordance_insert(List **listp, char *the_word)
{
    int first_char;
    List *current_list;
    Word *current_word;
    Word **wordp;
    int comparsion;
    Word *new_word;
    //���ȼ����������Ƿ��������
    first_char = *the_word;
    if (!islower(first_char)) return -1;

    //����ȥ�������ĸ��ͷ��list�����û�оʹ���һ��
    while ((current_list = *listp) != NULL && current_list->letter < first_char){
        listp = &current_list->next;
    }
    if (current_list == NULL || current_list->letter > first_char){
        List *new_list;
        new_list = (List *)malloc(sizeof(List));
        if (new_list == NULL) return -1;
        new_list->letter = first_char;
        new_list->wordlist = NULL;
        *listp = new_list;
        current_list = new_list;
    }
    //��ǰcurren_listָ�����������Ҫ���Ǹ�wordlist��ͷ��㣬�����������Ѱ�����ǵĵ���
    wordp = &current_list->wordlist;
    while ((current_word = wordp)!=NULL){
        comparsion = strcmp(current_word->word, the_word);
        if (comparsion >= 0){
            break;
        }
        wordp = &current_word->next;
    }
    //�����ǰ��current_word��Ϊ�ղ���comparsionΪ0����ʾ��������Ѿ���word��
    if (current_word != NULL && comparsion == 0) return -1;
    //���򴴽�һ���µĵ���
    new_word = (Word *)malloc(sizeof(Word));
    if (new_word == NULL) return -1;
    new_word->word = malloc(strlen(the_word)+1);
    if (new_word->word == NULL) return 0;
    strcpy(new_word->word, the_word);
    //������½ڵ���뵽word��
    new_word->next = current_word;
    *wordp = new_word;
    return 1;
}
