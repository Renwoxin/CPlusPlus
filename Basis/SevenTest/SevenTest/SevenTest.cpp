// SevenTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//��ӡ������
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			//��j�Ǽ�ֵ������´�ӡ�Ǻţ������ӡ�ո�
			if (j == 0 || j == 2 * i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	//ͼ���°벿��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 4 - 2 * i; j++)
		{
			//��j�Ǽ�ֵ������´�ӡ�Ǻţ������ӡ�ո�
			if (j == 0 || j == 4 - 2 * i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	//��ӡ������ĸ���
	//˫ѭ��
	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			cout << (char)('A' + i);
		}
		cout << endl;
	}
	//ͼ���°벿��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 4 - 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	//��ӡ����
	//˫ѭ��
	//���ѭ�������У����������У�
	//�ڲ�ѭ�������У��������е�ͼ�Σ�
	/*
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//ͼ���°벿��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 4 - 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/

	cin.get();
    return 0;
}

