// EighTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	//ʵ������Ԫ�ص�ɾ���Ͳ���
	double power[99]; // ����Ĵ�Сһ��ȷ���ˣ��Ͳ����ٸ����ˣ�����
	int powerCount = 0; //��ǰ�����е�Ԫ�ظ���
	double insertPower;	//Ҫ����Ĺ�������ֵ
	int insertIndex = 0;	//Ĭ�ϲ��뵽��һ����ֵ
	power[powerCount++] = 45771;
	power[powerCount++] = 42322;
	power[powerCount++] = 40907;
	power[powerCount++] = 40706;

	double temp;
	for (int i = 0; i < powerCount; i++)
	{
		for (int j = 0; j < powerCount - i - 1; j++)
		{
			if (power[j] < power[j + 1]) {
				temp = power[j];
				power[j] = power[j + 1];
				power[j + 1] = temp;
			}
		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << "\t";
	}
	cout << endl;  

	// ����
	insertIndex = powerCount;
	cout << "������Ҫ��������֣�";
	cin >> insertPower;
	//1���ҵ���һ���Ȳ������ִ��λ��insertIndex
	for (int i = 0; i < powerCount; i++)
	{
		if (insertPower > power[i])
		{
			insertIndex = i;
			break;
		}
	}
	//2�������һ��Ԫ�ؿ�ʼ�������ָ��Ƶ�����һ��Ԫ��
	for (int i = powerCount - 1; i >= insertIndex; i--)
	{
		power[i + 1] = power[i];
	}
	//3����Ҫ��������ָ�ֵ���±�ΪinsertIndex��Ԫ��
	power[insertIndex] = insertPower;
	//4���������ܳ���+1
	powerCount++;
	cout << "�����" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << "\t";
	}
	cout << endl;

	//ɾ��
	//1���ҵ�Ҫɾ����Ԫ���±�
	double deletePower;
	int deleteIndex = INT_MIN;
	cout << "������Ҫɾ�������֣�";
	cin >> deletePower;
	for (int i = 0; i < powerCount; i++)
	{
		if (deletePower == power[i]) {
			deleteIndex = i;
			break;
		}
	}
	if()
	//2�����ҵ����±꿪ʼ������һ��Ԫ�ظ�ֵ��ǰ��һ��Ԫ��
	for (int i = deleteIndex; i < powerCount - 1; i++)
	{
		power[i] = power[i + 1];
	}
	//3���ܳ���-1
	powerCount--;

	cout << "ɾ����" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << "\t";
	}
	//ѭ��¼��5���������֣����н������к�������
	//ѡ������
	/*
	int nums[] = { 15,25,90,23,9 };
	int numsLen = sizeof(nums) / sizeof(int);
	//��̨����
	int min = nums[0];	//������Сֵ������ĵ�һ��Ԫ��
	int minIndex = 0;	//��Сֵ�ĳ�ʼ�±�����Ϊ0
	int temp;
	for (int i = 0; i < numsLen - 1; i++)
	{
		min = nums[i];	//�����i��Ԫ������Сֵ
		minIndex = i;
		for (int j = i + 1; j < numsLen; j++)
		{
			if (nums[j] < min)
			{
				min = nums[j];
				minIndex = j;
			}
		}
		if (minIndex > i)
		{//����
			temp = nums[minIndex];
			nums[minIndex] = nums[i];
			nums[i] = temp;
		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	//����
	for (int i = 0; i < numsLen / 2; i++)
	{
		temp = nums[i];
		nums[i] = nums[numsLen - i - 1];
		nums[numsLen - i - 1] = temp;
	}
	cout <<"\n " << "�����" << endl;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	*/

	//ð������
	/*
	int temp;
	int nums[] = { 15,25,90,23,9 };
	//���ѭ�����ƱȽϵ�����
	for (int i = 0; i < 4; i++)
	{
		//�ڲ�ѭ������ÿ�ֵ�ѭ��
		for (int j = 0; j < 4 - i; j++)
		{
			if (nums[j] < nums[j + 1])
			{
				//����
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	cout << nums[0] << endl;

	*/
	/*
	//������ϰ
	int nums[]{ 8, 4, 2, 1, 23, 344, 12 };
	int numsLen = sizeof(nums) / sizeof(int);	//��������ĳ���
	int sum = 0;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < numsLen; i++)
	{
		sum += nums[i]; //�ۼ�ֵ
	}
	cout << "���еĺ�Ϊ��" << sum << "\tƽ��ֵΪ��" << sum / numsLen << endl;
	//1���������е����ֵ����Сֵ
	int max = nums[0];	//�����һ��Ԫ�������ֵ
	int maxIndex = 0;	//���ֵ���±�

	for (int i = 1; i < numsLen; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
			maxIndex = i;	//��¼���ֵ���±�
		}
	}
	cout << "���ֵ�ǣ� " << max << '/' << nums[maxIndex] << endl;
	cout << "���ֵ���±��ǣ�" << maxIndex << endl;


	//2������һ���������飬��ֵ���������������ż������
	int jCount = 0, oCount = 0;
	for (int i = 0; i < numsLen; i++)
	{
		if (nums[i] % 2 == 0)
		{
			oCount++;
		}
		else 
		{
			jCount++;

		}
	}
	cout << "��������Ϊ��" << jCount << "\t" << "ż������Ϊ�� " << oCount << endl;

	//3����������������������е��±꣬û���ҵ����±�Ϊ-1
	int searchNum;	//�û�Ҫ���ҵ�����
	int searchIndex = INT_MIN;	//�û��������ֵ��±꣬���óɲ����ܵ�ֵ
	cout << "������Ҫ���ҵ����֣�";
	cin >> searchNum;
	//ʹ��ѭ������
	for (int i = 0; i < numsLen; i++)
	{
		if (nums[i] == searchNum)
		{
			searchIndex = i; //��¼����Ԫ�ص��±�
			break;
		}
	}
	if (searchIndex == INT_MIN)
	{
		cout << "������û��������֣�" << endl;
	}
	else 
	{
		cout << searchIndex << "�������е��±�Ϊ��" << searchIndex << endl;
	}
	*/   

	//������ʾ�����
	/*int nums[]{ 8, 4, 2, 1, 23, 344, 12 };
	int numsLen = sizeof(nums) / sizeof(int);	//��������ĳ���
	int sum = 0;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < numsLen; i++)
	{
		sum += nums[i];
	}
	cout << "���еĺ�Ϊ��" << sum << "\tƽ��ֵΪ��" << sum / numsLen << endl;*/

	/*const int N = 5;
	int nums[N];

	cout << "����Ĵ�С��" << sizeof(nums) / sizeof(int) << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "�������" << (i + 1) << "������Ԫ�أ�";
		cin >> nums[i];
	}
	for (int i = 0; i < N; i++)
	{
		cout << nums[i] << endl;;
	}*/

	cin.get();
	cin.get();
    return 0;
}

