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
	float* scores;	//学生的分数数组
	int scoreCount;		//学生成绩个数
public:
	//构造函数的重载规则与普通函数重载相同
	Student();	
	Student(int);	//如果构造函数只有一个是唯一带参数的 
	Student(string, string);	//带参构造
	~Student();

	void InitScores();	//初始化学生成绩数组，默认分配1个元素空间
	void AddScore(float); //向scores数组中添加一个初值
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

