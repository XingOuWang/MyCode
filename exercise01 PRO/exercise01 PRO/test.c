#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n;
	int i = 0;
	int j = 1;
	scanf("%d", &n);//键盘输入正整数n

	for (i = 1; i <= n; i++) {

		//这里m必须定义在第一个for循环内，因为它的生命周期应该是从进for循环开始出for循环结束
		//如果定义在for循环外部那么上一次输出的m值就会作为下一次for循环开始的初始值，导致结果错误
		//在做的时候可以自己验证一下，定义在for循环外会输出什么结果。
		int m = 1;

		//判断是否是奇数
		if (i % 2 != 0) {
			//直接嵌套一个for循环求阶乘值
			for (j = 1; j <= i; j++) {
				m = m * j;
			}
			printf("%d! = %d\n", i, m);
		}

	}//遍历1~n之间的数。

	return 0;
}