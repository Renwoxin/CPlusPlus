// ThreeTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
int main()
{
	// 演示单精度浮点型和双精度浮点型精度问题
	float numFloat = 10 / 3.0;
	double numDouble = 10 / 3.0;

	cout << fixed; // 让浮点型固定以数字的方式显示
	cout << "numFloat = " << numFloat * 1000000 << endl;
	cout << "numDouble = " << numDouble * 1000000 << endl;
	/*
	//sizeof 用来测量数据类型的长度
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;
	cout << sizeof(3.24f) << endl;
	*/
	
	/*cin.get();

    return 0;
}*/


// 随堂练习

int main()
{
	int num1 = -5, num2 = 2;
	cout << num1 / num2 << endl;
	cout << num1 % num2 << endl;

	// 取模场景
	//1、取某个数字的个位 5 % 10
	//2、45天是一个月零几天：45 % 30

	num1 = (num2++) - (--num2);
	cout << num1 << '\t' << num2 << endl;

	/*
	double attack1 = 272;
	double attack2 = 250;
	double attack3 = 240;
	
	cout << left; // 左对齐
	cout << setfill('*'); //以‘*’填充
	cout << setw(8) << attack1 <<
			setw(8) << attack2 <<
			setw(8) << attack3 << endl;
			*/

	/*
	string str = "hello,你好";
	cout << str << endl;
	*/

	/*
	int num;
	char ch1, ch2, ch3;

	cout << "请输入一个数字:";
	cin >> num; // scanf（"%d", &num);
	cin >> ch1 >> ch2 >> ch3;

	cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 << endl;
	*/
	
	cin.get();
	return 0;
}

