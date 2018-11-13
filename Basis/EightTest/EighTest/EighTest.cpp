// EighTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	//实现数组元素的删除和插入
	double power[99]; // 数组的大小一旦确定了，就不能再更改了！！！
	int powerCount = 0; //当前数组中的元素个数
	double insertPower;	//要插入的攻击力数值
	int insertIndex = 0;	//默认插入到第一个数值
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
	cout << "排序后：" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << "\t";
	}
	cout << endl;  

	// 插入
	insertIndex = powerCount;
	cout << "请输入要插入的数字：";
	cin >> insertPower;
	//1、找到第一个比插入数字大的位置insertIndex
	for (int i = 0; i < powerCount; i++)
	{
		if (insertPower > power[i])
		{
			insertIndex = i;
			break;
		}
	}
	//2、从最后一个元素开始，将数字复制到后面一个元素
	for (int i = powerCount - 1; i >= insertIndex; i--)
	{
		power[i + 1] = power[i];
	}
	//3、将要插入的数字赋值给下标为insertIndex的元素
	power[insertIndex] = insertPower;
	//4、将数组总长度+1
	powerCount++;
	cout << "插入后：" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << "\t";
	}
	cout << endl;

	//删除
	//1、找到要删除的元素下标
	double deletePower;
	int deleteIndex = INT_MIN;
	cout << "请输入要删除的数字：";
	cin >> deletePower;
	for (int i = 0; i < powerCount; i++)
	{
		if (deletePower == power[i]) {
			deleteIndex = i;
			break;
		}
	}
	if()
	//2、从找到的下标开始，后面一个元素赋值给前面一个元素
	for (int i = deleteIndex; i < powerCount - 1; i++)
	{
		power[i] = power[i + 1];
	}
	//3、总长度-1
	powerCount--;

	cout << "删除后：" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << "\t";
	}
	//循环录入5个整型数字，进行降序排列后输出结果
	//选择排序
	/*
	int nums[] = { 15,25,90,23,9 };
	int numsLen = sizeof(nums) / sizeof(int);
	//擂台变量
	int min = nums[0];	//假设最小值是数组的第一个元素
	int minIndex = 0;	//最小值的初始下标设置为0
	int temp;
	for (int i = 0; i < numsLen - 1; i++)
	{
		min = nums[i];	//假设第i个元素是最小值
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
		{//交换
			temp = nums[minIndex];
			nums[minIndex] = nums[i];
			nums[i] = temp;
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	//逆序
	for (int i = 0; i < numsLen / 2; i++)
	{
		temp = nums[i];
		nums[i] = nums[numsLen - i - 1];
		nums[numsLen - i - 1] = temp;
	}
	cout <<"\n " << "逆序后：" << endl;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	*/

	//冒泡排序
	/*
	int temp;
	int nums[] = { 15,25,90,23,9 };
	//外层循环控制比较的轮数
	for (int i = 0; i < 4; i++)
	{
		//内层循环控制每轮的循环
		for (int j = 0; j < 4 - i; j++)
		{
			if (nums[j] < nums[j + 1])
			{
				//交换
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	cout << nums[0] << endl;

	*/
	/*
	//随堂练习
	int nums[]{ 8, 4, 2, 1, 23, 344, 12 };
	int numsLen = sizeof(nums) / sizeof(int);	//计算数组的长度
	int sum = 0;
	for (int i = 0; i < numsLen; i++)
	{
		cout << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < numsLen; i++)
	{
		sum += nums[i]; //累加值
	}
	cout << "数列的和为：" << sum << "\t平均值为：" << sum / numsLen << endl;
	//1、求数组中的最大值和最小值
	int max = nums[0];	//假设第一个元素是最大值
	int maxIndex = 0;	//最大值的下标

	for (int i = 1; i < numsLen; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
			maxIndex = i;	//记录最大值的下标
		}
	}
	cout << "最大值是： " << max << '/' << nums[maxIndex] << endl;
	cout << "最大值的下标是：" << maxIndex << endl;


	//2、定义一个整型数组，赋值后求出奇数个数和偶数个数
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
	cout << "奇数个数为：" << jCount << "\t" << "偶数个数为： " << oCount << endl;

	//3、查找输入的数字在数组中的下标，没有找到则下标为-1
	int searchNum;	//用户要查找的数字
	int searchIndex = INT_MIN;	//用户查找数字的下标，设置成不可能的值
	cout << "请输入要查找的数字：";
	cin >> searchNum;
	//使用循环查找
	for (int i = 0; i < numsLen; i++)
	{
		if (nums[i] == searchNum)
		{
			searchIndex = i; //记录查找元素的下标
			break;
		}
	}
	if (searchIndex == INT_MIN)
	{
		cout << "数组中没有这个数字！" << endl;
	}
	else 
	{
		cout << searchIndex << "在数组中的下标为：" << searchIndex << endl;
	}
	*/   

	//数组显示并求和
	/*int nums[]{ 8, 4, 2, 1, 23, 344, 12 };
	int numsLen = sizeof(nums) / sizeof(int);	//计算数组的长度
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
	cout << "数列的和为：" << sum << "\t平均值为：" << sum / numsLen << endl;*/

	/*const int N = 5;
	int nums[N];

	cout << "数组的大小：" << sizeof(nums) / sizeof(int) << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "请输入第" << (i + 1) << "个数组元素：";
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

