// FourthTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//模拟实现游戏中私聊的函数
/**
* 跟某人聊天 —— 负责字符串拼接（聊天格式）
* @param toName 聊天对象的名称
* @param content 聊天的内容
* @return 按某规定的格式拼接聊天信息后的字符串
*/

/*
string chatTo(const string& toName, const string& content);
string chatFrom(const string& fromName, const string& content);
*/

//使用重载实现数组的排序
//函数名相同，参数列表不同
/*
void Sort(int[], int len);
void Sort(float[], int len);
void Sort(double[], int len);
void Show(int[], int len);
void Show(float[], int len);
void Show(double[], int len);
*/

//书写函数模板
template<typename T> void Sort(T tArray[], int len);
template<typename T> void Show(T tArray[], int len);
int main()
{

	
	int iNums[]{ 56, 54, 12, 89, 43 };
	float fNums[]{ 78.0f, 5.7f, 42.8f, 99.1f };                
	double dNums[]{ 78.9, 23.6, 77.8, 98.5, 33.3 };
	string sNums[]{ "关羽","张飞","黄忠" };


	cout << "排序前：";
	Show(iNums, sizeof(iNums) / sizeof(iNums[0]));
	Sort(iNums, sizeof(iNums) / sizeof(iNums[0]));
	cout << "排序后：";
	Show(iNums, sizeof(iNums) / sizeof(iNums[0]));


	cout << "排序前：";
	Show(fNums, sizeof(fNums) / sizeof(fNums[0]));
	Sort(fNums, sizeof(fNums) / sizeof(fNums[0]));
	cout << "排序后：";
	Show(fNums, sizeof(fNums) / sizeof(fNums[0]));


	cout << "排序前：";
	Show(dNums, sizeof(dNums) / sizeof(dNums[0]));
	Sort(dNums, sizeof(dNums) / sizeof(dNums[0]));
	cout << "排序后：";
	Show(dNums, sizeof(dNums) / sizeof(dNums[0]));
	
	cout << endl;
	Show(sNums, sizeof(sNums) / sizeof(sNums[0]));

	/*
	string toName, content, fromName;
	cout << "请输入自己的姓名：";
	getline(cin, fromName);
	cout << "请输入对方的名称：";
	getline(cin, toName);
	cout << "请输入发送给对方的聊天信息：";
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

	//refValue指向int_value,是
	int& refValue = int_value;

	//错误：引用必须被初始化
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
* 跟某人聊天 —— 负责字符串拼接（聊天格式）
* @param toName 聊天对象的名称
* @param content 聊天的内容
* @return 按某规定的格式拼接聊天信息后的字符串
*/
string chatTo(const string& toName, const string& content)
{
	string msg = "﹡对[" + toName + "]说﹡" + content;
	return msg;
}
string chatFrom(const string& fromName, const string& content)
{
	string msg = fromName+ "[对﹡" + "﹡说]" + content;
	return msg;
}

/*
//#define N 5					//以后使用N的所有场合，都会被自动替换为5
//#define S(num) num * num	//宏定义了一个S(num)函数
//以后在所有使用S(num)的地方，就自动被替换成num * num
using namespace std;
//内联：替换
inline int S(int);

int& sum()	//返回引用类型的函数
{
int num = 10;
//注意：rNum是在sum()函数中定义的，故叫局部变量
//rNum的生存期只在sum()函数中！
int& rNum = num;

//函数中的局部变量会被内存回收
//所谓内存回收，并不是把内存的设置清零，
//而不是指内存中你的程序申请的这块内存已经不是你的了！

//不要返回局部变量的引用

return rNum;	//返回一个局部类型的引用类型变量
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
