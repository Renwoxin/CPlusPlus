#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string m_name;
	string m_desc;
	int m_age;
	float* scores;	//ѧ���ķ�������
	int scoreCount;		//ѧ���ɼ�����
public:
	//���캯�������ع�������ͨ����������ͬ
	Student();	
	Student(int);	//������캯��ֻ��һ����Ψһ�������� 
	Student(string, string);	//���ι���
	~Student();

	void InitScores();	//��ʼ��ѧ���ɼ����飬Ĭ�Ϸ���1��Ԫ�ؿռ�
	void AddScore(float); //��scores���������һ����ֵ
	string GetName() { return m_name; }
	void SetName(string val) { m_name = val; }
	string Getdecs() { return m_desc; }
	void Setdesc(string val) { m_desc = val; }
	int Getage() { return m_age; }
	void Setage(int val) { 
		if (val < 0)
		{
			m_age = 18;
		}
		else {
			m_age = val;
		}
	}
};

