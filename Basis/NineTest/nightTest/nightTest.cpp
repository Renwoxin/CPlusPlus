// nightTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	//数组的替代品——向量容器
	//vector——是一个快速的动态分配内存的数组
	//容器——大小可以动态扩展
	//1、动态数组，可以再运行阶段设置长度
	//2、具有数组的快速索引方式
	//3、可以插入和删除元素
	//定义和初始化
	//vector<double> vec1;
	//vector<string> vec2(5);
	//vector<int> vec3(20, 998);
	vector<double> vecDouble = { 98.5, 67.9, 43.6, 32.9 };
	//向数组中插入数字
	vecDouble.push_back(100.8);	//在数组的尾部插入一个数字
	//遍历
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}

	//集合的通用遍历方法：使用迭代器 iterator
	//以下是迭代器的基本用法，高能！！！
	vector<double>::iterator it; //得到迭代器对象-实际上是一个指针对象！
	//从第一个元素开始迭代
	for (it = vecDouble.begin();it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}
	//排序
	sort(vecDouble.begin(), vecDouble.end());
	for (it = vecDouble.begin();it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}
	reverse(vecDouble.begin(), vecDouble.end());
	for (it = vecDouble.begin();it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}
	                                                                                                                                                                       

	//二维数组打印
	/*
	string stuNames[]{ "A", "B", "C" };
	string courseNames[]{ "语文", "数学", "英语" };
	const int ROW = 3; 
	const int COL = 3;
	double scores[ROW][COL];

	for (int i = 0; i < ROW; i++)//外层循环控制学生
	{
		for (int j = 0; j < COL; j++)//内层循环控制课程
		{
			cout << stuNames[i] << "的" << courseNames[i] << "成绩是：";
			cin >> scores[i][j];
		}
	}
	//打印结果
	for (int i = 0; i < ROW; i++)//外层循环控制学生
	{
		for (int j = 0; j < COL; j++)//内层循环控制课程
		{
			cout << stuNames[i] << "的" << courseNames[i] << "成绩是：";
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

