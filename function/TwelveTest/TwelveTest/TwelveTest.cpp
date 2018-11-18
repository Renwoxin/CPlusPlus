// TwelveTest.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <cmath>
//#include "demo.h"
//#include "arraydemo.h"
//#include "funcptr.h"
#include "myCalc.h"
#include <string>
using namespace std;


int main()
{
	//定义函数指针
	//typedef double(*ptrCalc)(double, double);
	//ptrCalc ptrCalc1;
	double(*ptrCalc)(double, double);
	ptrCalc = NULL;
	//auto ptrCalc = addition;
	double num1, num2;
	char op;
	cout << "请输入两个操作数：";
	cin >> num1 >> num2;
	cout << "请输入运算符：";
	cin >> op;
	
	switch (op)
	{case '+':
		//调用加法函数
		ptrCalc = addition;
		break;
	case '-':
		//调用函数减法
		ptrCalc = subtraction;
		break;
	case '*':
		//调用函数乘法
		ptrCalc = multiplication;
		break;
	case '/':
		//调用函数除法
		ptrCalc = division;
		break;
	default:
		break;
	}
	//调用
	print_result(ptrCalc, num1, num2);

	//int power(int, int);
	//声明函数指针
	/*int (*ptrPower)(int, int);
	//让声明的函数指针指向函数，以便调用
	ptrPower = power;

	cout << (*ptrPower)(3, 4) << endl;
	*/
	/*
	double power[3][5] = {
		{11, 22, 33, 44, 55},
		{12, 12, 13, 34 ,54},
		{45, 43, 76, 89, 33}
	};
	show(power, 3);
	*/

	/*
	int values[5];
	input(values, 5);
	print(values, 5);
	print(values, 5);
	*/
	cin.get();
	cin.get();
	return 0;
}

/*
	三种形状的体积计算公式如下：
	长方体：长×宽×高
	圆柱体：圆周率×半径的平方×高
	圆锥体：1/3 × 底面积 × 高
*/
//1、定义三个函数，分别用来计算三种形状的体积
//2、在main函数中用户可以选择计算某个形状的体积

/*
void calcCuboid();	//计算长方体的体积
void calcCylinder();	//计算圆柱体的体积
void calcCone();	//计算圆锥体的体积

int main()
{
	int choice = -1;
	while (choice) {
		cout << "1、长方体" << endl;
		cout << "2、圆柱体" << endl;
		cout << "0、退出" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			calcCuboid();
			break;
		case 2:
			calcCylinder();
			break;
		default:
			break;
		}
	}
	cout << "感谢使用本软件！！！" << endl;
	cin.get();
	cin.get();
	return 0;
}

void calcCuboid()
{
	//输入长宽高
	double len, width, height;
	cout << "请输入长宽高：";
	cin >> len >> width >> height;
	//计算体积
	double v = len * width * height;
	cout << "长方体体积为：" << v << endl;
}

void calcCylinder()
{
	double radius, height; //半径
	cout << "请输入半径和高：";
	cin >> radius >> height;
	//计算面积
	double pi = 4 * atan(1.0);
	double v = pi * pow(radius, 2) * height;
	cout << "圆柱体的体积为：" << v << endl;
}

*/
/*

//计算两个数字之和
int sum(int, int); //函数原型


int main()
{
	//调用函数
	int result = sum(5, 6);
	cout << "结果为：" << result << endl;
	cin.get();
    return 0;
}

int sum(int num1, int num2)
{
	//1、计算两个数字之和
	int result = num1 + num2;
	//2、返回计算结果
	return result;
}
*/