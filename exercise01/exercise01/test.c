#define _CRT_SECURE_NO_WARNINGS 1




//编写程序，求出1到n之间所有奇数的阶乘值。
#include<stdio.h>

//一个求阶乘的函数
int F(int x)
{
	int i = 0;


	int j = 1;
	for (i = 1; i <= x;i++) {
		j = j * i;
	}//用for循环算阶乘值



	return j;//返回阶乘值
}




int main()
{
	int n;
	int i = 0;
	int m = 0;
	scanf("%d",&n);//键盘输入正整数n
	
	for (i = 1; i <= n;i++) {

		//判断是否是奇数
		if (i%2 != 0) {

			//如果是奇数求其阶乘值，我们可以定义一个函数来算阶乘值
			m = F(i);
			printf("%d! = %d\n",i,m);
		}

	}//遍历1~n之间的数。

	return 0;
}