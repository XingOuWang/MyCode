#define _CRT_SECURE_NO_WARNINGS 1




//��д�������1��n֮�����������Ľ׳�ֵ��
#include<stdio.h>

//һ����׳˵ĺ���
int F(int x)
{
	int i = 0;


	int j = 1;
	for (i = 1; i <= x;i++) {
		j = j * i;
	}//��forѭ����׳�ֵ



	return j;//���ؽ׳�ֵ
}




int main()
{
	int n;
	int i = 0;
	int m = 0;
	scanf("%d",&n);//��������������n
	
	for (i = 1; i <= n;i++) {

		//�ж��Ƿ�������
		if (i%2 != 0) {

			//�������������׳�ֵ�����ǿ��Զ���һ����������׳�ֵ
			m = F(i);
			printf("%d! = %d\n",i,m);
		}

	}//����1~n֮�������

	return 0;
}