#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#define MAX 1000
//int main()
//{
//	char j = '0';
//	int i = 0;
//	int sum = 0;
//	char arr[MAX];
//	gets(arr);
//	int sz = strlen(arr) - 1;
//	for (i = 0; i <= sz; i++) 
//	{
//		if(arr[i] != ' ')
//		{
//			sum++;
//		}
//	}
//	printf("%d\n",sum);
//	
//	return 0;
//}

//int main()
//{
//	char j = '10';
//	char* pa = j;
//	printf("%c",*pa);
//	return 0;
//}

int main()
{
	int sum = 0;
	int i = 0;
	char arr[MAX];
	gets(arr);
	int sz = strlen(arr) - 1;
	for (i = 0; i <= sz; i++) 
	{
		if(arr[i] != ' ') 
		{
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}