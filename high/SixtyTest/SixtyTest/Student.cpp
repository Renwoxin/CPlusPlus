#include "stdafx.h"
#include "Student.h"


Student::Student()
{
	cout << "Ĭ�Ϲ���" << endl;
}
Student::Student(int age)
{
	m_age = age;
	cout << "Ĭ�Ϲ���,,," << age << endl;
}
Student::Student(string name, string desc) :m_name(name), m_desc(desc)
{
	//m_name = name;	//�ȼ�д�� SetName(name);
	//m_desc = desc;
	cout << "���ι���" << endl;
	InitScores();
}
void Student::InitScores()
{
	this->scores = new float[1];
	this->scoreCount = 1;
}
Student::Student(int stu3)
{
	cout << "���ι���" << endl;
	InitScores();
}
void Student::AddScore(float)
{
	this->scores[this->scoreCount - 1] = score;
	//1������һ�������飬����scoreCount+1���ռ�
	//2������ԭ�����е����ݵ�������
	//3��scoreCount++
	//4��scoresָ��������
	
	/**δ��� */
	 

}
Student::~Student()
{
	cout << m_name << "���ͷ�" << endl;
	delete this->scores;
}
