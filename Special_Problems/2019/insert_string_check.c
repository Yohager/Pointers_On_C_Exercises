#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[30] = "abc";
    char t[] = "xyz";
    int i,j;
    i=0;
    while(s[i]!='\0') i++;
    j=0;i++;
    while(t[j] != '\0'){
        s[i+j] = t[j];
        j++;
    }
    s[i+j] = '\0';
    printf("%s\n",s);
    return 0;
}
