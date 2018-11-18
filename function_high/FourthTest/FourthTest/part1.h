#pragma once
#include "stdafx.h"
#include <iostream>

/*using namespace std;

void Swap1(int, int);
void Swap2(int*, int*);
void Swap3(int&, int&);
void show(const int&, const int&);
void Swap1(int num1, int num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void Swap2(int* p1, int* p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void Swap3(int& ref1, int& ref2) {
	//使用引用
	//1、可以更加简便的书写代码
	//2、可以直接传递某个对象，而不是只是把对象复制一份
	int temp;
	temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void show(const int& num1, const int& num2)
{
	//希望显示逻辑中，只能实现传入参数的显示功能
	//而禁止显示函数修改num1和num2的值（禁止函数内部修改引用参数值）
	//解决方案：在参数中使用const
	cout << "执行Swap后：" << num1 << "\t" << num2 << endl;
}
*/