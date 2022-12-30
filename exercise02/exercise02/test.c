#define _CRT_SECURE_NO_WARNINGS 1



//编写一个函数，实现两个整数的交换，要求采用指针的方式实现。
#include<stdio.h>
//int main()
//{
//	int m, n, x;
//	scanf("%d %d",&m,&n);//键盘输入两个整数m，n。
//
//	//定义指针变量将m，n的地址存入指针变量
//	int* xx = &x;
//	int* mm = &m;
//	int* nn = &n;
//
//	//交换m，n的地址
//	*xx = *mm;
//	*mm = *nn;
//	*nn = *xx;
//
//	//打印交换了值的m，n
//	printf("%d %d",m,n);
//	return 0;
//}

//上面的刚开始想想的有点复杂了，可以直接打印指针变量，然后解引用指针变量直接输出
int main()
{
	int m, n;
	scanf("%d %d",&m,&n);//输入m，n。

	//将m，n的地址存入指针变量。
	int* p = &m;
	int* q = &n;


	//直接打印指针变量,用*解引用通过查找p，q的地址，找到m，n
	printf("%d %d",*q,*p);

	return 0;
}




