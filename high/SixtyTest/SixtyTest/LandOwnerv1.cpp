#include "stdafx.h"
#include "LandOwnerv1.h"


LandOwnerv1::LandOwnerv1()
{
}

//实现摸牌方法
void LandOwnerv1::TouchCard(int cardCount)
{
	cout << name << "摸" << cardCount << "张牌" << endl;
}
void LandOwnerv1:: Showscore()
{
	cout << name << "当前积分为：" << score;
}

LandOwnerv1::~LandOwnerv1()
{
}
