// ThreeTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
int main()
{
	// ��ʾ�����ȸ����ͺ�˫���ȸ����;�������
	float numFloat = 10 / 3.0;
	double numDouble = 10 / 3.0;

	cout << fixed; // �ø����͹̶������ֵķ�ʽ��ʾ
	cout << "numFloat = " << numFloat * 1000000 << endl;
	cout << "numDouble = " << numDouble * 1000000 << endl;
	/*
	//sizeof ���������������͵ĳ���
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;
	cout << sizeof(3.24f) << endl;
	*/
	
	/*cin.get();

    return 0;
}*/


// ������ϰ

int main()
{
	int num1 = -5, num2 = 2;
	cout << num1 / num2 << endl;
	cout << num1 % num2 << endl;

	// ȡģ����
	//1��ȡĳ�����ֵĸ�λ 5 % 10
	//2��45����һ�����㼸�죺45 % 30

	num1 = (num2++) - (--num2);
	cout << num1 << '\t' << num2 << endl;

	/*
	double attack1 = 272;
	double attack2 = 250;
	double attack3 = 240;
	
	cout << left; // �����
	cout << setfill('*'); //�ԡ�*�����
	cout << setw(8) << attack1 <<
			setw(8) << attack2 <<
			setw(8) << attack3 << endl;
			*/

	/*
	string str = "hello,���";
	cout << str << endl;
	*/

	/*
	int num;
	char ch1, ch2, ch3;

	cout << "������һ������:";
	cin >> num; // scanf��"%d", &num);
	cin >> ch1 >> ch2 >> ch3;

	cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 << endl;
	*/
	
	cin.get();
	return 0;
}

