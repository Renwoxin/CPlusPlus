#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//.hpp �ļ�һ�����ʵ�ֵ�����������ͨ������ģ��������������ʵ�ֹ�������
//���飺ֻҪ���Ǵ�ģ�壬һ��ʹ��.h��Ϊͷ�ļ���׺��ʹ��.cpp�ļ���Ϊ������ʵ���ļ�
class LandOwnerv1
{
public:
	string name;	//	����������
	long score;		// �����Ļ���
	int cards[20];	// ��������������
public:
	LandOwnerv1();
	~LandOwnerv1();
	void TouchCard(int cardCount);	//�������Ʒ���
	void Showscore();				//��������ʾ���ַ���
};

