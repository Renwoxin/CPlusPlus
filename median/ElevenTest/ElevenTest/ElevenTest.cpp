// ElevenTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//ȫ����
int num1 = 0;
int main()
{
	int * p = new int[10];
	int arrays[5][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12},
		{13, 14, 15} };

	int (*p2)[3] = arrays;
	//ʹ��ָ�봴����ά����
	//int(*p2)[3] = new int[5][3];	//��ά������3��һά������ɵ�
	//p2[3][2] = 998;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
		{
			//cout << p2[i][j] << ",";
			cout << *(*(p2 + i) + j) << ",";
		}
		cout << endl;
	}
	cout << &arrays[1][0] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << p2 + i << endl;
	}
	//����
	/*
	int	arrays[]{ 15, 23, 30, 40, 50 };
	int * ptr_start = arrays;
	int * ptr_end = arrays + 4;

	int temp;

	while (ptr_start < ptr_end)
	{
		temp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = temp;
		ptr_start++;
		ptr_end--;
	}
	for (int i = 0; i < 5; i++) {
		cout << arrays[i] << endl;
	}*/
	/*
	int	arrays[]{ 15, 23, 30, 40, 50 };
	int* ptr_array = arrays;

	for (int i = 0; i < 5; i++) {
		cout << *ptr_array++ << "\t";
		//cout << *(ptr_array+i) << "\t";	//��ָ֤�벻�ƶ�
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << *ptr_array++ << "\t";
	}
	*/

	/*
	int num[5];
	int* nums = new int;

	cout << sizeof(num) << "\t" << sizeof(nums) << endl;
	*/
	cin.get();
	return 0;
}

