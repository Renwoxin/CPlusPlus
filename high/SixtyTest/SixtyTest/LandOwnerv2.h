#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class LandOwnerv2
{
	//ʡ����private��Ĭ����private
	long score;		// ������ֱ���ֵΪ��������ķ���������Ա����score�������ز���װ
	int cards[20];	// ��������������
public:
	string name;
	LandOwnerv2();
	~LandOwnerv2();
	void Showscore();

	//ʹ�÷���/����ʵ�ֶԳ�Ա�����ķ�װGet/Set����
	void SetScore(long lScore)
	{
		if (lScore < 0)
		{
			//�������Ļ����ǷǷ��������ô����Ĭ��Ϊ0
			score = 0;
		}
		else {
			//����Ϊ����ʱ���Ž��и�ֵ�������������ͨ�������жϣ���װ��score�ĸ�ֵ����
			score = lScore;
		}
	}
};

