// FourTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//������ϰ2
	//��Ů�Ĺ��ﳵ
	double price_louis = 35000.0;
	double price_hemes = 11044.5;
	double price_chanel = 1535.0;
	double total = 0; //�ܼ�
	double zhekou = 0; // �ۿ�
	total = price_louis + price_hemes + price_chanel;
	//��������������Ʒ��һ�ֵ��۴���1000
	//����������Ʒ�ܽ�����5000.�ۿ���Ϊ30%
	//����û���ۿ�
	if (price_chanel > 1000 || price_hemes > 1000 || price_louis > 1000 || total > 5000)
	{
		//
	}
	//����ܼ۴���5w�����ۣ������9��
	
	if (total > 50000)
	{
		zhekou = 0.7;
	}
	else
	{
		zhekou = 0.9;
	}
	total *= zhekou;

	cout << "���ո��" << total << endl;

	cin.get();
	//������ϰ1
	/*
	//ifʹ��
	//Ӳ���̷�һ�����A-Z��д��ĸ
	// ʹ�ó����ж��û�������ַ��Ƿ��ǺϷ���Ӳ���̷�
	char pan = '\0'; //Ĭ��ֵ����Ϊ���ַ�
	cout << "������һ���ַ��������ж��Ƿ�Ϸ�:";
	cin >> pan;
	// 'A'~ 'Z
	if (pan >= 'A' && pan <= 'Z')
	{
	cout << "�ǺϷ��ģ�" << endl;
	}
	else
	{
	cout << "�Ƿ���" << endl;
	}
	cin.get();
	//cin.get();
	*/

	/*cout << sizeof('abc\0') << endl; //�ַ���Ĭ�ϼ���һ����\0��
	cout << "sizeof(char) = " << sizeof(char) << '\n';
	cout << "sizeof(short) = " << sizeof(short) << '\n';
	cout << "sizeof(int) = " << sizeof(int) << '\n';
	cout << "sizeof(long) = " << sizeof(long) << '\n';
	cout << "sizeof(long long) = " << sizeof(long long) << '\n';
	cout << "sizeof(float) = " << sizeof(float) << '\n';
	cout << "sizeof(double) = " << sizeof(double) << '\n';
	cout << "sizeof(long double) = " << sizeof(long double) << '\n';*/

	/*//��λ��
	cout << (4 & 5) << endl;
	//��λ��
	cout << (~2) << endl;
	//��λ����
	cout << (2 << 3) << endl;
	//��λ����
	cout << (16 >> 3) << endl;*/

	//C�����У�0��ʾ�٣���0��ʾ��
	//C++�У������˲�������bool
	/*ol flag = true; //false
	cout << boolalpha;
	cout << "15 > 88 ��" << (15 > 88) << endl;
	cout << "16 < 99 ��" << (16 < 99) << endl;*/

	//��ʾ���������
	/*int num = 1024;
	num += 90; <= = > num = num + 90;
	num *= 90;
	num /= 90;
	num -= 90;
	num %= 90;
	cout << num << endl;*/
    return 0;
}

