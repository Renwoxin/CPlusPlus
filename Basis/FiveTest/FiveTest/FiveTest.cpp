// FiveTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//��ϰ��
	//����һ������order����ʾ����
	int order;
	cout << "Hello! Master, \n";
	cout << "1.��һ��Ӳ�ˣ�\n";
	cout << "2.��һƿ���ͣ�\n";
	cout << "1.��һ��ʫ��\n";
	cout << "��������ʲô�Ը�����������1~3����";
	cin >> order;
	if (order == 1)
	{
		cout << "�˺��ˣ�";
	}
	else if (order == 2)
	{
		cout << "�͵��ˣ�";
	}
	else if (order == 3)
	{
		cout << "what a fuck!\n";
	}
	else 
	{
		cout << "who TM care?\n";
	}
	cout << "I care";
	//��ϰ��
	/*char ch;	// y��ʾ��Ա��n��ʾ�ǻ�Ա
	float cost1;	//������Ʒ1�ķ���
	float cost2;	//������Ʒ2�ķ���
	float cost3;	//������Ʒ3�ķ���
	float total_cost;	//������Ʒ���ܷ���
	double discount;	//�ۿ۽��
	double pay;		// ����֧�����

	cout << "�Ƿ��Ա����y/n��\n";
	cin >> ch;
	cout << "�����һ����Ʒ�ķ���: ";
	cin >> cost1;
	cout << "����ڶ�����Ʒ�ķ���: ";
	cin >> cost2;
	cout << "�����������Ʒ�ķ���: ";
	cin >> cost3;

	total_cost = cost1 + cost2 + cost3;
	discount = 0;

	if (ch == 'y' || total_cost >= 100)
	{
		//������Ӧ���ۿ�
		discount = total_cost * 0.2;
	}
	if (ch == 'y' && total_cost >= 100)
	{
		//������Ӧ���ۿ�
		discount = total_cost * 0.3;
	}
	pay = total_cost - discount;
	// ���������ʽ������λ��
	cout << "\n�ܽ�� = " << fixed << setprecision(2) << total_cost << "Ԫ\n";
	cout << "\n�ۿ۽�� = " << discount << "Ԫ\n";
	cout << "\nӦ���ܶ� = " << pay << "Ԫ\n";
	*/

	//��ϰһ,ʵ��3����������
	/*
	//����x��y��z����������t��ʾ�м����
	int x, y, z, t;
	cout << "������3��������\n";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "�����3�����ֱ��� ��" << x << "," << y << "," << z << "\n";
	if (x > y)
	{
	// x>yʱ������x��y��ֵ
	t = x;
	x = y;
	y = t;
	}
	if (x > z)
	{
	//x > zʱ������x��z��ֵ
	t = x;
	x = z;
	z = t;
	}
	if (y > z)
	{
	// y > zʱ������y��z��ֵ
	t = y;
	y = z;
	z = t;
	}
	cout << "��С���������Ϊ��" << x << "," << y << "," << z << "\n";
	*/

	// ʹ��ѭ��ģ��ȭ�ʶ�ս
	//�����HP
	/*
	int hp1 = 100;
	int hp2 = 100;

	int attack1 = 0; //����Ĺ�����
	int attack2 = 0; //���S���Ĺ�����
	int randNum; //���������ҹ����Ⱥ�����������

	srand(time(NULL));


	while (hp1 >= 0 && hp2 >= 0)//
	{
	// ģ����ҳ��У����Բ��������������/ż���ķ�ʽ������˭�Ƚ��й���
	//����-�����ȳ��У�ż��- ���S���ȳ���
	randNum = rand();
	if (randNum % 2 == 1)
	{//����
	attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
	attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

	hp2 -= attack1; //�����Ѫ
	hp1 -= attack2;
	}
	else
	{//ż��
	attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
	attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

	hp1 -= attack2; //�����Ѫ
	hp2 -= attack1;
	}
	}
	// 2����ӡ��ս�����ս��
	cout << "����HP:" << hp1 << endl;
	cout << "���S��HP:" << hp2 << endl;
	*/
	
	/*int n = 0;
	while (n++ <= 2);  //<=> while(n <= 2) n++
	cout << n;*/
	
	/*int k = 1, n = 10, m = 1;
	while (k <= n)
	{
		m *= 2;
		n--;
	}
	cout << m;*/

	// ĳ��˫ʮһ2015��Ľ��׶�Ϊ800�ڣ�ÿ�����25%
	//�ʣ������ٶ����꽻�׶�ﵽ2000�ڣ�
	/*
	double money = 800.0;
	int year = 2015;

	while (money < 2000) {
	year++;
	money = money *(1 + 0.25);
	cout << "��" << year << "�꣬Ӫҵ��ﵽ" << money << "�ڣ�" << endl;
	}
	cout << "��" << year << "�꣬Ӫҵ��ﵽ" << money << "�ڣ�" << endl;
	*/
	

	// ʹ��ѭ��ʵ������������������˳�ϵͳ
	// �����벻�����������Լ�����
	/*
	string password;	//����
	int i = 0;			//ѭ������������ѭ������
	while (i < 3)
	{
		cout << "���������룺" << endl;
		cin >> password;
		cout << "������������ǣ�" << password << endl;
		i++;
		//�ж��û�������Ƿ���ȷ
		if (password != "12345678")
		{
			if (i == 3)
			{
				cout << "3�������������ϵͳǿ���˳���" << endl;
				exit(123456);
			}
		}
	}*/

	// ʹ��ѭ������1-100���ۼӺ�
	//��Ҫѭ������
	//��Ҫ�ۼӺͱ���
	//ѭ��
	/*
	int num = 1; //��������ѭ�������ı���
	int sum = 0; // ���������ۼӺ͵ı���
	while (num <= 100) {
		//sum = sum + num;
		sum += num;
		cout << num << num << endl;
		num++;
	}
	cout << "1-100���ۼӺ�Ϊ��" << sum << endl;
	*/

	/*int choice = 1;
	switch (choice)
	{
	case 1:
		cout << 1 << endl;
		break;
	case 2:
		cout << 2 << endl;
		break;
	case 3:
		cout << 3 << endl;
		break;
	case 4:
		cout << 4 << endl;
		break;
	default:
		break;
	}*/

	/*double flowerPrice;
	//��ӡ����
	cout << "����ǰ�ĺڰ�������ȥ......" << endl;
	cout << "A�ͻ���B��B���⻨����Ǯ��" << endl;
	cin >> flowerPrice;
	if (flowerPrice >= 50000)
	{
		cout << "��֤" << endl;
	}
	else if (flowerPrice >= 10000 && flowerPrice < 50000)
	{
		cout << "" << endl;
	}
	else
	{

	}*/
	cin.get();
	cin.get();
    return 0;
}

