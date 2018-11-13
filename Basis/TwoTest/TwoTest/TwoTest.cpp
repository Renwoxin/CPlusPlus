// Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//作业1
/*int main()
{
cout << "int   整型" << endl;
cout << "short 短整型" << endl;
cout << "long  长整型" << endl;
cout << "bool  布尔类型" << endl;
cout << "char  字符类型" << endl;
cout << "float 单精度浮点数" << endl;
cout << "double 双精度浮点数" << endl;
cin.get();
return 0;
}*/

/*int main()
{
cout << "int    整型" << endl;
cout << "short  短整型" << endl;
cout << "long   长整型" << endl;
cout << "bool   布尔类型" << endl;
cout << "char   字符类型" << endl;
cout << "float  单精度浮点数" << endl;
cout << "double 双精度浮点数" << endl;
cin.get();
return 0;
}*/

/*int main()
{
cout << "int     整型" << endl;
cout << "short   短整型" << endl;
cout << "long    长整型" << endl;
cout << "bool    布尔类型" << endl;
cout << "char    字符类型" << endl;
cout << "float   单精度浮点型" << endl;
cout << "double  双精度浮点型" << endl;
cin.get();
return 0;
}*/
//作业2
/*int main()
{
	int a, b, c;
	cout << "请输入第一个数a:" << endl;
	cin >> a;
	cout << "请输入第二个数b:" << endl;

	//显示互换前的两个数
	cin >> b;
	cout << endl << "交换前" << endl << "a为：" << a << endl << "b:为" << b << endl;

	//通过中间变量c互换这两个数
	c = a;
	a = b;
	b = c;
	//显示呼唤后的两个数
	cout << endl << "交换后" << endl << "a为：" << a << endl << "b为：" << b << endl;
	cout << c << endl;
	cin.get();
	return 0;
}*/
//作业3
/*int main()
{
	//设定a来存放输入的小写字符
	char a;
	cout << "请输入一个小写字符：\n";
	cin >> a;
	// 小写字母转换对应的大写字母；
	a -= 32;
	cout << "转换后为：\n" << a;
	cin.get();
	cin.get();
	return 0;
}*/

//作业4
//根据输入矩形的长和宽，计算矩形的面积和周长
int main()
{
	//定义长、宽变量
	int a, b;
	cout << "输入长a：";
	cin >> a;
	cout << "输入宽b：";
	cin >> b;
	//计算矩形周长
	cout << "矩形的周长为：" << 2 * (a + b) << endl;
	// 就算矩形面积
	cout << "矩形的面积为：" << a * b << endl;
	cin.get();
	cin.get();
	return 0;
}


