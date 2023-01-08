#define _CRT_SECURE_NO_WARNINGS 1

//冒泡排序


#include<stdio.h>
#include "bubble_sort.h"

int main()
{
	//需要排序的数组
	int arr[] = {9,8,7,6,5,4,3,2,1,0};


	//求数组长度
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,sz);


	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ",arr[i]);
	}

	return 0;
}