#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username;
	cout << "��������������";
	cin >> username;
	if(username.size() >= 2)
	{
		cout << "��л���ķ���" << username;
	}
	else
	{
		cout << "��������ȷ�����֣�";
	}
	return 0;
}