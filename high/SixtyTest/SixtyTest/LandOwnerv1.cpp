#include "stdafx.h"
#include "LandOwnerv1.h"


LandOwnerv1::LandOwnerv1()
{
}

//ʵ�����Ʒ���
void LandOwnerv1::TouchCard(int cardCount)
{
	cout << name << "��" << cardCount << "����" << endl;
}
void LandOwnerv1:: Showscore()
{
	cout << name << "��ǰ����Ϊ��" << score;
}

LandOwnerv1::~LandOwnerv1()
{
}
