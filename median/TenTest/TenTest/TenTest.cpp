// TenTest.cpp : �������̨Ӧ�ó������ڵ㡣
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
	void *vptr_obj = &objNum;	//����ָ����������
	cout << (ptr_obj == vptr_obj) << endl;

	/*
	int *ptr1 = nullptr; //�ȼ���int* ptr1 = 0��
	int *ptr2 = 0; //ֱ�ӽ�ptr2��ʼ��Ϊ���泣��0

	//��Ҫ����cstdlib
	int *ptr3 = NULL; //�ȼ���int *ptr2 = 0��

	cout << ptr1 << endl;
	cout << ptr2 << endl;
	cout << ptr3 << endl;
	*/

	/*
	char ch = 'a';
	char* ptr_ch = &ch; //��char��ָ�뵱���ַ����ˣ����������ӡ��ʱ��ǿ��ת������ô�Ͳ����ӡ����ȷ��ַ

	cout << (void *)ptr_ch <<'\t' << *ptr_ch << endl;

	*/

	/*
	double num = 1024.5;
	//����ָ��ָ��num����
	double* ptr_num = &num;

	cout << "ptr_num��ֵ��" << ptr_num << endl;
	cout << "ptr_numָ��ռ��ֵ" << *ptr_num << endl;
	*/
	cin.get();
    return 0;
}

