#define _CRT_SECURE_NO_WARNINGS 1



//�ж��������Ƿ�Ϊ��������



#include<stdio.h>
#include<string.h>
#define MAX 100000
int main()
{

	int i = 0;

	int n;
	scanf("%d\n",&n);



	char a[MAX];
	char b[MAX];
	scanf("%s\n%s",a,b);

	int c = strlen(b) - 1;


	
	for (i = 0 ; i < n; i++) {

		if (a[0 + i] != b[c - i]) {
			printf("%s and %s are not reverse.", a, b);
			break;
		}

	}
	if (i == n) {
		printf("%s and %s are reverse.",a,b);
	}
	

	


	return 0;
}