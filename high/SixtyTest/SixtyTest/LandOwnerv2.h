#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class LandOwnerv2
{
	//省略了private，默认是private
	long score;		// 解决积分被赋值为负数错误的方法，将成员变量score进行隐藏并封装
	int cards[20];	// 地主的手牌数组
public:
	string name;
	LandOwnerv2();
	~LandOwnerv2();
	void Showscore();

	//使用方法/函数实现对成员变量的封装Get/Set方法
	void SetScore(long lScore)
	{
		if (lScore < 0)
		{
			//如果传入的积分是非法情况，那么积分默认为0
			score = 0;
		}
		else {
			//积分为正数时：才进行赋值操作——这里就通过条件判断，封装了score的赋值过程
			score = lScore;
		}
	}
};

