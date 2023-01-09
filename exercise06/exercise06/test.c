#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 10000
int main()
{
	char j = 'a';
	
	int i = 0;
	char ch[MAX];
	gets(ch);

	int sz = strlen(ch) - 1;
	
	for (j; j <= 'z'; j++) {
		int count = 0;
		for (i = 0; i <= sz; i++) {

			if (ch[i] == j) {
				count++;
			}

		}
		if (count != 0) {
			printf("%c:%d\n", j, count);
		}
	}


	

	return 0;
}