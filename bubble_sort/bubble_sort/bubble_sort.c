#define _CRT_SECURE_NO_WARNINGS 1



void bubble_sort(int arr[],int sz)
{

	//ȷ������������
	int i = 0;
	for (i = 0; i < sz-1; i++) {
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				//����
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}


}