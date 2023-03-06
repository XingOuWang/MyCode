#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username;
	cout << "请输入您的姓名";
	cin >> username;
	if(username.size() >= 2)
	{
		cout << "感谢您的访问" << username;
	}
	else
	{
		cout << "请输入正确的名字！";
	}
	return 0;
}