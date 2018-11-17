#pragma once
//使用函数升级《小公主养成记》中的基本属性录入及排序功能
//基本属性：体力、智力、魅力、道德、气质
#include <iostream>
#include <string>
using namespace std;
//函数定义
void input(int[], int);
void print(const int[], int);
//函数实现
void input(int values[], int len)
{
	if (len > 5)
	{
		cout << "超长！！！" << endl;
		return;// 退出返回值为void的函数
	}
	string valueNames[] = { "体力","智力","魅力","道德","气质" };
	for (int i = 0; i < len; i++)
	{
		cout << valueNames[i] << ":";
		cin >> values[i];
	}
}

void print(const int values[], int len)
{
	string valueNames[] = { "体力","智力","魅力","道德","气质" };
	for (int i = 0; i < len; i++)
	{
		cout << valueNames[i] << ":" << values[i] << endl;
	}
}
#pragma once
