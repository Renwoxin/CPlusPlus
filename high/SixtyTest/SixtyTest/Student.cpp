#include "stdafx.h"
#include "Student.h"


Student::Student()
{
	cout << "默认构造" << endl;
}
Student::Student(int age)
{
	m_age = age;
	cout << "默认构造,,," << age << endl;
}
Student::Student(string name, string desc) :m_name(name), m_desc(desc)
{
	//m_name = name;	//等价写法 SetName(name);
	//m_desc = desc;
	cout << "带参构造" << endl;
	InitScores();
}
void Student::InitScores()
{
	this->scores = new float[1];
	this->scoreCount = 1;
}
Student::Student(int stu3)
{
	cout << "带参构造" << endl;
	InitScores();
}
void Student::AddScore(float)
{
	this->scores[this->scoreCount - 1] = score;
	//1、创建一个新数组，分配scoreCount+1个空间
	//2、复制原数组中的内容到新数组
	//3、scoreCount++
	//4、scores指向新数组
	
	/**未完成 */
	 

}
Student::~Student()
{
	cout << m_name << "被释放" << endl;
	delete this->scores;
}
