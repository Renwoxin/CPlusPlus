// Test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//��ҵ1
/*int main()
{
cout << "int   ����" << endl;
cout << "short ������" << endl;
cout << "long  ������" << endl;
cout << "bool  ��������" << endl;
cout << "char  �ַ�����" << endl;
cout << "float �����ȸ�����" << endl;
cout << "double ˫���ȸ�����" << endl;
cin.get();
return 0;
}*/

/*int main()
{
cout << "int    ����" << endl;
cout << "short  ������" << endl;
cout << "long   ������" << endl;
cout << "bool   ��������" << endl;
cout << "char   �ַ�����" << endl;
cout << "float  �����ȸ�����" << endl;
cout << "double ˫���ȸ�����" << endl;
cin.get();
return 0;
}*/

/*int main()
{
cout << "int     ����" << endl;
cout << "short   ������" << endl;
cout << "long    ������" << endl;
cout << "bool    ��������" << endl;
cout << "char    �ַ�����" << endl;
cout << "float   �����ȸ�����" << endl;
cout << "double  ˫���ȸ�����" << endl;
cin.get();
return 0;
}*/
//��ҵ2
/*int main()
{
	int a, b, c;
	cout << "�������һ����a:" << endl;
	cin >> a;
	cout << "������ڶ�����b:" << endl;

	//��ʾ����ǰ��������
	cin >> b;
	cout << endl << "����ǰ" << endl << "aΪ��" << a << endl << "b:Ϊ" << b << endl;

	//ͨ���м����c������������
	c = a;
	a = b;
	b = c;
	//��ʾ�������������
	cout << endl << "������" << endl << "aΪ��" << a << endl << "bΪ��" << b << endl;
	cout << c << endl;
	cin.get();
	return 0;
}*/
//��ҵ3
/*int main()
{
	//�趨a����������Сд�ַ�
	char a;
	cout << "������һ��Сд�ַ���\n";
	cin >> a;
	// Сд��ĸת����Ӧ�Ĵ�д��ĸ��
	a -= 32;
	cout << "ת����Ϊ��\n" << a;
	cin.get();
	cin.get();
	return 0;
}*/

//��ҵ4
//����������εĳ��Ϳ�������ε�������ܳ�
int main()
{
	//���峤�������
	int a, b;
	cout << "���볤a��";
	cin >> a;
	cout << "�����b��";
	cin >> b;
	//��������ܳ�
	cout << "���ε��ܳ�Ϊ��" << 2 * (a + b) << endl;
	// ����������
	cout << "���ε����Ϊ��" << a * b << endl;
	cin.get();
	cin.get();
	return 0;
}


