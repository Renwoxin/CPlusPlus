// nightTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	//��������Ʒ������������
	//vector������һ�����ٵĶ�̬�����ڴ������
	//����������С���Զ�̬��չ
	//1����̬���飬���������н׶����ó���
	//2����������Ŀ���������ʽ
	//3�����Բ����ɾ��Ԫ��
	//����ͳ�ʼ��
	//vector<double> vec1;
	//vector<string> vec2(5);
	//vector<int> vec3(20, 998);
	vector<double> vecDouble = { 98.5, 67.9, 43.6, 32.9 };
	//�������в�������
	vecDouble.push_back(100.8);	//�������β������һ������
	//����
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}

	//���ϵ�ͨ�ñ���������ʹ�õ����� iterator
	//�����ǵ������Ļ����÷������ܣ�����
	vector<double>::iterator it; //�õ�����������-ʵ������һ��ָ�����
	//�ӵ�һ��Ԫ�ؿ�ʼ����
	for (it = vecDouble.begin();it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}
	//����
	sort(vecDouble.begin(), vecDouble.end());
	for (it = vecDouble.begin();it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}
	reverse(vecDouble.begin(), vecDouble.end());
	for (it = vecDouble.begin();it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}
	                                                                                                                                                                       

	//��ά�����ӡ
	/*
	string stuNames[]{ "A", "B", "C" };
	string courseNames[]{ "����", "��ѧ", "Ӣ��" };
	const int ROW = 3; 
	const int COL = 3;
	double scores[ROW][COL];

	for (int i = 0; i < ROW; i++)//���ѭ������ѧ��
	{
		for (int j = 0; j < COL; j++)//�ڲ�ѭ�����ƿγ�
		{
			cout << stuNames[i] << "��" << courseNames[i] << "�ɼ��ǣ�";
			cin >> scores[i][j];
		}
	}
	//��ӡ���
	for (int i = 0; i < ROW; i++)//���ѭ������ѧ��
	{
		for (int j = 0; j < COL; j++)//�ڲ�ѭ�����ƿγ�
		{
			cout << stuNames[i] << "��" << courseNames[i] << "�ɼ��ǣ�";
			cin >> scores[i][j];
		}
	}
	cout << "\t";
	for (int i = 0; i < ROW; i++) {
		cout << courseNames[i] << '\t';
	}
	for (int i = 0; i < ROW; i++)
	{
		cout << stuNames[i] << "\t";
		for (int j = 0; j < COL; j++)
		{
			cout << scores[i][j];
		}
		cout << endl;
	}
	*/
	cin.get();
	cin.get();
    return 0;
}

