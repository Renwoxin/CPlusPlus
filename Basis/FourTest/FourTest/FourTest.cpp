// FourTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//随堂练习2
	//美女的购物车
	double price_louis = 35000.0;
	double price_hemes = 11044.5;
	double price_chanel = 1535.0;
	double total = 0; //总价
	double zhekou = 0; // 折扣
	total = price_louis + price_hemes + price_chanel;
	//如果购买的三种商品有一种单价大于1000
	//或者三种商品总金额大于5000.折扣率为30%
	//否则没有折扣
	if (price_chanel > 1000 || price_hemes > 1000 || price_louis > 1000 || total > 5000)
	{
		//
	}
	//如果总价大于5w打七折，否则打9折
	
	if (total > 50000)
	{
		zhekou = 0.7;
	}
	else
	{
		zhekou = 0.9;
	}
	total *= zhekou;

	cout << "最终付款：" << total << endl;

	cin.get();
	//随堂练习1
	/*
	//if使用
	//硬盘盘符一般采用A-Z大写字母
	// 使用程序判断用户输入的字符是否是合法的硬盘盘符
	char pan = '\0'; //默认值设置为空字符
	cout << "请输入一个字符，进行判断是否合法:";
	cin >> pan;
	// 'A'~ 'Z
	if (pan >= 'A' && pan <= 'Z')
	{
	cout << "是合法的！" << endl;
	}
	else
	{
	cout << "非法！" << endl;
	}
	cin.get();
	//cin.get();
	*/

	/*cout << sizeof('abc\0') << endl; //字符串默认加了一个‘\0’
	cout << "sizeof(char) = " << sizeof(char) << '\n';
	cout << "sizeof(short) = " << sizeof(short) << '\n';
	cout << "sizeof(int) = " << sizeof(int) << '\n';
	cout << "sizeof(long) = " << sizeof(long) << '\n';
	cout << "sizeof(long long) = " << sizeof(long long) << '\n';
	cout << "sizeof(float) = " << sizeof(float) << '\n';
	cout << "sizeof(double) = " << sizeof(double) << '\n';
	cout << "sizeof(long double) = " << sizeof(long double) << '\n';*/

	/*//按位与
	cout << (4 & 5) << endl;
	//按位非
	cout << (~2) << endl;
	//按位左移
	cout << (2 << 3) << endl;
	//按位右移
	cout << (16 >> 3) << endl;*/

	//C语言中，0表示假，非0表示真
	//C++中，引入了布尔类型bool
	/*ol flag = true; //false
	cout << boolalpha;
	cout << "15 > 88 吗？" << (15 > 88) << endl;
	cout << "16 < 99 吗？" << (16 < 99) << endl;*/

	//演示复合运算符
	/*int num = 1024;
	num += 90; <= = > num = num + 90;
	num *= 90;
	num /= 90;
	num -= 90;
	num %= 90;
	cout << num << endl;*/
    return 0;
}

