#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//在下面一组有序数中找到整数 7 .对有序数的查找我们可以使用二分(折半)查找。
	//思想就是取中位数然后和要查找的数进行比较
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的长度

	int right = sz - 1;


	while (left<=right)//条件是左边的下标要小于等于右边的下标，因为它是一组有序数 
	{
		int mid = (left + right) / 2;//求中位数的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到这个数了，下标是：%d\n", mid);
			break;
		}

	}




	return 0;
}