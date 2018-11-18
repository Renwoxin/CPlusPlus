#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//.hpp 文件一般包含实现的内联函数，通常用于模板类这种声明与实现共存的情况
//建议：只要不是纯模板，一律使用.h作为头文件后缀，使用.cpp文件作为函数的实现文件
class LandOwnerv1
{
public:
	string name;	//	地主的名称
	long score;		// 地主的积分
	int cards[20];	// 地主的手牌数组
public:
	LandOwnerv1();
	~LandOwnerv1();
	void TouchCard(int cardCount);	//声明摸牌方法
	void Showscore();				//声明的显示积分方法
};

