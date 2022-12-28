#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if (x>0&&x<5) {
		y = x * x + 1;
		printf("x=%.2lf,y=%.2lf",x,y);
	}
	else if (x==0) {
		y = 0;
		printf("x=%.2lf,y=%.2lf", x, y);
	}
	else if (x>-5&&x<0) {
		y = 4-x;
		printf("x=%.2lf,y=%.2lf", x, y);
	}
	else {
		printf("No meaning");
	}
	return 0;
}