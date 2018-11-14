// TenTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	double score[5] = { 98, 87, 65, 43, 76 };
	double * ptr_score;
	ptr_score = &score[1];
	ptr_score += 2;
	cout << *ptr_score << endl;
	ptr_score -= 3;
	cout << *ptr_score << endl;
	/*
	double score[]{ 11, 22, 33, 44, 55 };
	double * ptr_score = score;

	//数组——数组名就是数组的首地址
	//指针的大小一般是4个字节
	cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;
	cout << *(ptr_score + 30) << endl;*/

	/*int i;
	double score[5]{ 98, 87, 65, 43, 76 };
	double * ptr_score;
	ptr_score = score;
	for (i = 0; i < 5; i++)
	{
		cout << *ptr_score++ << endl;
	}
	*/
	/*
	double score[]{ 11, 22, 33, 44, 55 };
	double * ptr_score = score;

	//数组——数组名就是数组的首地址
	//指针的大小一般是4个字节
	cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;
	cout << ptr_score[2] << endl;
	*/

	/*int num = 108;
	int& rel_num = num;
	rel_num = 118;
	cout << &num << "\t" << &rel_num << endl;
	*/
	//等同于如下
	/*int num = 108;
	int* rel_num = &num;
	*rel_num = 118;
	cout << &num << "\t" << rel_num << endl;*/

	/*
	double objNum = 3.14;
	double *ptr_obj = &objNum;

	//cout << boolalpha;
	void *vptr_obj = &objNum;	//可以指向任意类型
	cout << (ptr_obj == vptr_obj) << endl;
	*/

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

