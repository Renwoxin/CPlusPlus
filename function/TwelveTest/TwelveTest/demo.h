#pragma once
//ʹ�ú���������С�������ɼǡ��еĻ�������¼�뼰������
//�������ԣ����������������������¡�����
#include <iostream>
#include <string>
using namespace std;
//��������
void input(int[], int);
void print(const int[], int);
//����ʵ��
void input(int values[], int len)
{
	if (len > 5)
	{
		cout << "����������" << endl;
		return;// �˳�����ֵΪvoid�ĺ���
	}
	string valueNames[] = { "����","����","����","����","����" };
	for (int i = 0; i < len; i++)
	{
		cout << valueNames[i] << ":";
		cin >> values[i];
	}
}

void print(const int values[], int len)
{
	string valueNames[] = { "����","����","����","����","����" };
	for (int i = 0; i < len; i++)
	{
		cout << valueNames[i] << ":" << values[i] << endl;
	}
}
#pragma once
