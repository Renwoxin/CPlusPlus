// TenTest.cpp : �������̨Ӧ�ó������ڵ㡣
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

	//���顪������������������׵�ַ
	//ָ��Ĵ�Сһ����4���ֽ�
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

	//���顪������������������׵�ַ
	//ָ��Ĵ�Сһ����4���ֽ�
	cout << sizeof(score) << '\t' << sizeof(ptr_score) << endl;
	cout << ptr_score[2] << endl;
	*/

	/*int num = 108;
	int& rel_num = num;
	rel_num = 118;
	cout << &num << "\t" << &rel_num << endl;
	*/
	//��ͬ������
	/*int num = 108;
	int* rel_num = &num;
	*rel_num = 118;
	cout << &num << "\t" << rel_num << endl;*/

	/*
	double objNum = 3.14;
	double *ptr_obj = &objNum;

	//cout << boolalpha;
	void *vptr_obj = &objNum;	//����ָ����������
	cout << (ptr_obj == vptr_obj) << endl;
	*/

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

