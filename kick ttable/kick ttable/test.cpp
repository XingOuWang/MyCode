#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 100; i++) 
	{
		if(i % 7 == 0||i % 10 == 0||i /10 ==7) 
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}
	return 0;
}