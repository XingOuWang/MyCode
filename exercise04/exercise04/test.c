#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//������һ�����������ҵ����� 7 .���������Ĳ������ǿ���ʹ�ö���(�۰�)���ҡ�
	//˼�����ȡ��λ��Ȼ���Ҫ���ҵ������бȽ�
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);//��������ĳ���

	int right = sz - 1;


	while (left<=right)//��������ߵ��±�ҪС�ڵ����ұߵ��±꣬��Ϊ����һ�������� 
	{
		int mid = (left + right) / 2;//����λ�����±�
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
			printf("�ҵ�������ˣ��±��ǣ�%d\n", mid);
			break;
		}

	}




	return 0;
}