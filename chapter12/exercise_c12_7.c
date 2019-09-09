/*
编写一个函数，将一个新单词插入到问题七中的索引表中
函数接受两个参数：一个指向list的指针，一个字符串，该字符串假定包含单个单词
如果这个单词原先并未存在于索引表中，它应该复制到一块动态分配的节点并插入到list中，插入成功返回1
如果该字符串原先已经存在于list中或者字符串不是一个以字母开头的字符串或者其他错误则返回-1
函数维护一个一级链表，节点的排序以字母为序，其余的二级链表则以单词为序排列
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
    //首先检查这个单词是否符合条件
    first_char = *the_word;
    if (!islower(first_char)) return -1;

    //首先去找这个字母开头的list，如果没有就创建一个
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
    //当前curren_list指向的是我们需要的那个wordlist的头结点，对其进行搜索寻找我们的单词
    wordp = &current_list->wordlist;
    while ((current_word = wordp)!=NULL){
        comparsion = strcmp(current_word->word, the_word);
        if (comparsion >= 0){
            break;
        }
        wordp = &current_word->next;
    }
    //如果当前的current_word不为空并且comparsion为0，表示这个单词已经在word中
    if (current_word != NULL && comparsion == 0) return -1;
    //否则创建一个新的单词
    new_word = (Word *)malloc(sizeof(Word));
    if (new_word == NULL) return -1;
    new_word->word = malloc(strlen(the_word)+1);
    if (new_word->word == NULL) return 0;
    strcpy(new_word->word, the_word);
    //将这个新节点加入到word中
    new_word->next = current_word;
    *wordp = new_word;
    return 1;
}
