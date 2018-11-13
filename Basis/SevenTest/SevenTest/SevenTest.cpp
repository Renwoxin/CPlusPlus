// SevenTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//打印空菱形
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			//在j是极值的情况下打印星号，否则打印空格
			if (j == 0 || j == 2 * i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	//图形下半部分
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 4 - 2 * i; j++)
		{
			//在j是极值的情况下打印星号，否则打印空格
			if (j == 0 || j == 4 - 2 * i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	//打印菱形字母组成
	//双循环
	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			cout << (char)('A' + i);
		}
		cout << endl;
	}
	//图形下半部分
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 4 - 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	//打印菱形
	//双循环
	//外层循环控制行（行数，换行）
	//内层循环控制列（列数，列的图形）
	/*
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//图形下半部分
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 4 - 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/

	cin.get();
    return 0;
}

