#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char ch;
	int count = 1;
	int switch_1 = 1;
	while ((ch = getchar()) != EOF){
		if (switch_1 == 1){
			printf("%d ",count);
			count += 1;
			switch_1 += 1;
		}
		if (ch == '\n'){
			switch_1 = 1;
		}
		putchar(ch);
	}
	return 0;
}
