// TwelveTest.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//���庯��ָ��
	//typedef double(*ptrCalc)(double, double);
	//ptrCalc ptrCalc1;
	double(*ptrCalc)(double, double);
	ptrCalc = NULL;
	//auto ptrCalc = addition;
	double num1, num2;
	char op;
	cout << "������������������";
	cin >> num1 >> num2;
	cout << "�������������";
	cin >> op;
	
	switch (op)
	{case '+':
		//���üӷ�����
		ptrCalc = addition;
		break;
	case '-':
		//���ú�������
		ptrCalc = subtraction;
		break;
	case '*':
		//���ú����˷�
		ptrCalc = multiplication;
		break;
	case '/':
		//���ú�������
		ptrCalc = division;
		break;
	default:
		break;
	}
	//����
	print_result(ptrCalc, num1, num2);

	//int power(int, int);
	//��������ָ��
	/*int (*ptrPower)(int, int);
	//�������ĺ���ָ��ָ�������Ա����
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
	������״��������㹫ʽ���£�
	�����壺���������
	Բ���壺Բ���ʡ��뾶��ƽ������
	Բ׶�壺1/3 �� ����� �� ��
*/
//1�����������������ֱ���������������״�����
//2����main�������û�����ѡ�����ĳ����״�����

/*
void calcCuboid();	//���㳤��������
void calcCylinder();	//����Բ��������
void calcCone();	//����Բ׶������

int main()
{
	int choice = -1;
	while (choice) {
		cout << "1��������" << endl;
		cout << "2��Բ����" << endl;
		cout << "0���˳�" << endl;
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
	cout << "��лʹ�ñ����������" << endl;
	cin.get();
	cin.get();
	return 0;
}

void calcCuboid()
{
	//���볤���
	double len, width, height;
	cout << "�����볤��ߣ�";
	cin >> len >> width >> height;
	//�������
	double v = len * width * height;
	cout << "���������Ϊ��" << v << endl;
}

void calcCylinder()
{
	double radius, height; //�뾶
	cout << "������뾶�͸ߣ�";
	cin >> radius >> height;
	//�������
	double pi = 4 * atan(1.0);
	double v = pi * pow(radius, 2) * height;
	cout << "Բ��������Ϊ��" << v << endl;
}

*/
/*

//������������֮��
int sum(int, int); //����ԭ��


int main()
{
	//���ú���
	int result = sum(5, 6);
	cout << "���Ϊ��" << result << endl;
	cin.get();
    return 0;
}

int sum(int num1, int num2)
{
	//1��������������֮��
	int result = num1 + num2;
	//2�����ؼ�����
	return result;
}
*/