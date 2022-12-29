//编写计算斐波那契（Fibonacci）数列的第n项函数fib（n）(n < 40)。
//	数列描述：
//	f1 = f2 == 1;
//fn = fn - 1 + fn - 2(n >= 3)。

#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


int Fib(int x)
{
	if (x < 3) {
		return 1;
	}
	else {
		return Fib(x - 1) + Fib(x - 2);
	}
}


int main() 
{
	int n;
	scanf("%d",&n);
	printf("%d",Fib(n));
	return 0;
}
