// TenTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double objNum = 3.14;
	double *ptr_obj = &objNum;

	//cout << boolalpha;
	void *vptr_obj = &objNum;	//可以指向任意类型
	cout << (ptr_obj == vptr_obj) << endl;

	/*
	int *ptr1 = nullptr; //等价于int* ptr1 = 0；
	int *ptr2 = 0; //直接将ptr2初始化为字面常量0

	//需要包含cstdlib
	int *ptr3 = NULL; //等价于int *ptr2 = 0；

	cout << ptr1 << endl;
	cout << ptr2 << endl;
	cout << ptr3 << endl;
	*/

	/*
	char ch = 'a';
	char* ptr_ch = &ch; //把char型指针当成字符串了，所以如果打印的时候不强制转换，那么就不会打印出正确地址

	cout << (void *)ptr_ch <<'\t' << *ptr_ch << endl;

	*/

	/*
	double num = 1024.5;
	//声明指针指向num变量
	double* ptr_num = &num;

	cout << "ptr_num的值：" << ptr_num << endl;
	cout << "ptr_num指向空间的值" << *ptr_num << endl;
	*/
	cin.get();
    return 0;
}

