// Test.cpp : 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

/*int main()
{
	//cout << "Hello" << "World!" << endl;
	//cout：输出对象
	cout << "英雄名称：LYL\n";
	cout << "伤害：600\n"
		<< "护甲：600\n"
		<< "生命值：600\n";
	cin.get();
	return 0;
}*/
//计算体积
/*int main()
{
	int num1 = 10, num2 = 8;
	float num = 12345.12345678;
	cout << num1 << "锦上无端\n"
		<< num <<"\n"
		<< num2 << "一仙一度" << endl;
	const float PI = 3.14f; //定义了一个float类型的常量
	float radius = 4.5f;
	float height = 90.0f;
	double volume = PI * pow(radius, 2)*height;
	cout << "体积为：" << volume <<endl;
	cin.get();
	return 0;
}*/
//控制显示精度
/*int main()
{
	//控制cout的显示精度
	//1.强制以小数的方式显示
	cout << fixed;
	//2.控制显示的精度
	cout << setprecision(2);
	//输出double类型数据
	double  doubleNum = 100.0 / 3.0;
	
	cout << doubleNum * 1000000 << endl;
	cin.get();
	return 0;
}*/

/*int main()
{
	cout << fixed << setprecision(2);
	cout << "|" << setw(8) << 3.14 << "|" << endl;

	float floatNum = 10.0 / 3.0; //单精度浮点型数字
	double doubleNum = 10.0 / 3.0; //双精度浮点型数字
	const float million = 1000000; //设置100w为常量

	cout << "floatNum = " << floatNum << endl;
	cout << "100w * floatNum = " << million * floatNum << endl;
	cout << "1000w * doubleNum = " << 10 * million * doubleNum << endl;
	
	cin.get();
	return 0;
}*/

//课堂作业1（非公众号）
//int main()
//{
	// 打印德玛西亚之力
	//SetConsoleTitle("示例：打印德玛西亚之力的详细信息");
	/* 伤害 */
	//double value_attack = 57.88;
	/* 伤害成长值 */
	//double value_attack_growth = 4.5;
	/* 攻击距离 */
	//double value_attack_distance = 172;
	/* 护甲值 */
	//double value_defence = 27.54;
	/* 护甲成长值 */
	//double value_denfece_growth = 3.0;

	//cout << "名称：打印德玛西亚之力" << endl;
	//cout << "伤害：" << value_attack << "(+" << value_attack_growth << ")\t"
		//<< "攻击距离：" << value_attack_distance << endl;

	
	//cin.get();
	//return 0;
//}

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
//课堂练习
/*int main()
{
	// 演示单精度浮点型和双精度浮点型精度问题
	float numFloat = 10 / 3.0;
	double numDouble = 10 / 3.0;

	cout << fixed; // 让浮点型固定以数字的方式显示
	cout << "numFloat = " << numFloat * 1000000 << endl;
	cout << "numDouble = " << numDouble * 1000000 << endl;
	
	//sizeof 用来测量数据类型的长度
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;
	cout << sizeof(3.24f) << endl;
	

	cin.get();

	return 0;
}*/

