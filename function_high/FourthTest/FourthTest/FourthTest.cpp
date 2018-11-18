// FourthTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//ģ��ʵ����Ϸ��˽�ĵĺ���
/**
* ��ĳ������ ���� �����ַ���ƴ�ӣ������ʽ��
* @param toName ������������
* @param content ���������
* @return ��ĳ�涨�ĸ�ʽƴ��������Ϣ����ַ���
*/

/*
string chatTo(const string& toName, const string& content);
string chatFrom(const string& fromName, const string& content);
*/

//ʹ������ʵ�����������
//��������ͬ�������б�ͬ
/*
void Sort(int[], int len);
void Sort(float[], int len);
void Sort(double[], int len);
void Show(int[], int len);
void Show(float[], int len);
void Show(double[], int len);
*/

//��д����ģ��
template<typename T> void Sort(T tArray[], int len);
template<typename T> void Show(T tArray[], int len);
int main()
{

	
	int iNums[]{ 56, 54, 12, 89, 43 };
	float fNums[]{ 78.0f, 5.7f, 42.8f, 99.1f };                
	double dNums[]{ 78.9, 23.6, 77.8, 98.5, 33.3 };
	string sNums[]{ "����","�ŷ�","����" };


	cout << "����ǰ��";
	Show(iNums, sizeof(iNums) / sizeof(iNums[0]));
	Sort(iNums, sizeof(iNums) / sizeof(iNums[0]));
	cout << "�����";
	Show(iNums, sizeof(iNums) / sizeof(iNums[0]));


	cout << "����ǰ��";
	Show(fNums, sizeof(fNums) / sizeof(fNums[0]));
	Sort(fNums, sizeof(fNums) / sizeof(fNums[0]));
	cout << "�����";
	Show(fNums, sizeof(fNums) / sizeof(fNums[0]));


	cout << "����ǰ��";
	Show(dNums, sizeof(dNums) / sizeof(dNums[0]));
	Sort(dNums, sizeof(dNums) / sizeof(dNums[0]));
	cout << "�����";
	Show(dNums, sizeof(dNums) / sizeof(dNums[0]));
	
	cout << endl;
	Show(sNums, sizeof(sNums) / sizeof(sNums[0]));

	/*
	string toName, content, fromName;
	cout << "�������Լ���������";
	getline(cin, fromName);
	cout << "������Է������ƣ�";
	getline(cin, toName);
	cout << "�����뷢�͸��Է���������Ϣ��";
	getline(cin, content);
	string chatMsg = chatTo(toName, content);
	cout << endl << chatMsg << endl;
	string chatFromMsg = chatFrom(fromName, content);
	cout << endl << chatFromMsg << endl;
	*/

	/*
	int num = 10;
	int& result = sum(num);
	sum(num) = 55;
	cout << "result = " << result << endl;
	*/

	/*
	int num1 = 10, num2 = 15;
	int& result = sum(num1, num2);
	cout << "result = " << result << endl;
	*/
	/*
	int& result = sum();
	test();
	cout << "result = " << result << endl;
	*/

	/*
	int int_value = 1024;

	//refValueָ��int_value,��
	int& refValue = int_value;

	//�������ñ��뱻��ʼ��
	*/

	/*
	// 5 + 10 * 5 + 10 = 65
	int result1 = S(5 + 10);
	cout << result1 << endl;
	*/
	cin.get();
	cin.get();
    return 0;
}
template<typename T> 
void Sort(T tArray[], int len)
{
	int temp;
	cout << "sizeof(tArray) = " << sizeof(tArray) << endl;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1;j++)
		{
			temp = tArray[j];
			tArray[j] = tArray[j + 1];
			tArray[j + 1] = temp;
		}
	}
}

template<typename T> 
void Show(T tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i] << "\t";
	}
	cout << endl;
}

/*
void Sort(int nums[], int len) {
	int temp;
	cout << "sizeof(nums) = " << sizeof(nums) << endl;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1;j++)
		{
			temp = nums[j];
			nums[j] = nums[j + 1];
			nums[j + 1] = temp;
		}
	}
}

void Sort(float nums[], int len) {
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1;j++)
		{
			temp = nums[j];
			nums[j] = nums[j + 1];
			nums[j + 1] = temp;
		}
	}
}

void Sort(double nums[], int len) {
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1;j++)
		{
			temp = nums[j];
			nums[j] = nums[j + 1];
			nums[j + 1] = temp;
		}
	}
}

void Show(int nums[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << endl;
}

void Show(float nums[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << endl;
}

void Show(double nums[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << endl;
}
*/

/**
* ��ĳ������ ���� �����ַ���ƴ�ӣ������ʽ��
* @param toName ������������
* @param content ���������
* @return ��ĳ�涨�ĸ�ʽƴ��������Ϣ����ַ���
*/
string chatTo(const string& toName, const string& content)
{
	string msg = "�~��[" + toName + "]˵�~" + content;
	return msg;
}
string chatFrom(const string& fromName, const string& content)
{
	string msg = fromName+ "[�ԩ~" + "�~˵]" + content;
	return msg;
}

/*
//#define N 5					//�Ժ�ʹ��N�����г��ϣ����ᱻ�Զ��滻Ϊ5
//#define S(num) num * num	//�궨����һ��S(num)����
//�Ժ�������ʹ��S(num)�ĵط������Զ����滻��num * num
using namespace std;
//�������滻
inline int S(int);

int& sum()	//�����������͵ĺ���
{
int num = 10;
//ע�⣺rNum����sum()�����ж���ģ��ʽоֲ�����
//rNum��������ֻ��sum()�����У�
int& rNum = num;

//�����еľֲ������ᱻ�ڴ����
//��ν�ڴ���գ������ǰ��ڴ���������㣬
//������ָ�ڴ�����ĳ������������ڴ��Ѿ���������ˣ�

//��Ҫ���ؾֲ�����������

return rNum;	//����һ���ֲ����͵��������ͱ���
}
void test()
{
int x = 1;
int y = 2;
}
*/
/*
int& sum(int& num1, int& num2)
{
num1++;
num2++;
}
*/
/*
int & sum(int& num)
{
num++;
return num;
}
*/
/*
int S(int num)
{
	return num * num;
}
*/
