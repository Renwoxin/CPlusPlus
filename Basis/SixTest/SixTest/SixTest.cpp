// SixTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//��1-100֮���ż����
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		//������������
		if (i % 2 == 1)
			continue;
		sum += i;
	}
	cout << "1-100֮���ż����Ϊ�� " << sum << endl;


	//ѭ������5����ҵ����ѣ�ͳ�����Ѷ����500���������
	/*double money; //��ҵ�����
	int count = 0;	// ����500��ҵ���������������
	for (int i = 0; i < 5; i++)
	{
		cout << "�����뵱ǰ��ҵ����Ѷ ";
		cin >> money;
		if (money >= 500)
			continue;
		count++;
	}
	cout << "���Ѷ����500����������ǣ�" << count << endl;*/

	//������ϰ
	//����53����Ʒ�۸���Ϸ
	//���ݲµĴ������費ͬ�Ľ���
	//1�Σ�iPhone8P
	//2~3�Σ�С���ƶ���Դ
	//5�����ڣ�VR�۾�
	/*const double PRICE = 5000.0;	//��Ʒ�۸�
	double guessPrice = 0;	//�û��²����Ʒ�۸�
	double guessCount = 0;	//�û��²�Ĵ���

	//��Ϸʵ������һ����ѭ��
	for (;;) {
		// ÿ��һ�Σ�������1,���ڲ�ǰ�����������Ȼ�¶Ե���һ�ξͲ��ܼ���
		guessCount++;
		cout << "��������Ʒ�۸�";
		cin >> guessPrice;
		if (guessPrice > PRICE)
		{
			cout << "���ˣ�" << endl;
		}
		else if (guessPrice < PRICE)
		{
			cout << "С�ˣ�" << endl;
		}
		else
		{
			cout << "��ϲ�����¶��ˣ�" << endl;
			break;
		}
	}
	if (guessCount == 1) {
		cout << "��iPhone8P������" << endl;
	}
	else if (guessCount >= 2 && guessCount <= 3) {
		cout << "��С���ƶ���Դ������" << endl;
	}
	else if (guessCount >= 4 && guessCount <= 5) {
		cout << "��VR�۾�������" << endl;
	}
	else {
		cout << "лл�ݹˣ�����" << endl;
	}*/
	
	//1997��7������
	//1���������
	/*int day = 31;	//7�¹�31��
	int dayofWeek = 2;	//7�µ�һ�����ܶ�
	cout << "һ\t��\t��\t��\t��\t��\t��" << endl;
	for (int i = 0; i < dayofWeek - 1; i++)
	{
	cout << '\t';
	}
	//2����дѭ��
	//��ӡ����,7����31�죬������forѭ����ӡ31��
	for (int i = 0; i < day; i++) {
	cout << i + 1;
	//�����Ǵ�ӡ\n����\t,����7�ı���������
	if ((i + dayofWeek) % 7 == 0)
	{
	cout << '\n';
	}
	else
	{
	cout << '\t';
	}
	}
	*/
	
	cin.get();
	cin.get();
    return 0;
}

