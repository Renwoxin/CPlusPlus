// FiveTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//练习三
	//定义一个变量order来表示命令
	int order;
	cout << "Hello! Master, \n";
	cout << "1.炒一个硬菜！\n";
	cout << "2.打一瓶酱油！\n";
	cout << "1.吟一首诗！\n";
	cout << "请问你有什么吩咐（输入命令1~3）：";
	cin >> order;
	if (order == 1)
	{
		cout << "菜好了！";
	}
	else if (order == 2)
	{
		cout << "油到了！";
	}
	else if (order == 3)
	{
		cout << "what a fuck!\n";
	}
	else 
	{
		cout << "who TM care?\n";
	}
	cout << "I care";
	//练习二
	/*char ch;	// y表示会员，n表示非会员
	float cost1;	//购买商品1的费用
	float cost2;	//购买商品2的费用
	float cost3;	//购买商品3的费用
	float total_cost;	//购买商品的总费用
	double discount;	//折扣金额
	double pay;		// 最终支付金额

	cout << "是否会员？（y/n）\n";
	cin >> ch;
	cout << "购买第一件商品的费用: ";
	cin >> cost1;
	cout << "购买第二件商品的费用: ";
	cin >> cost2;
	cout << "购买第三件商品的费用: ";
	cin >> cost3;

	total_cost = cost1 + cost2 + cost3;
	discount = 0;

	if (ch == 'y' || total_cost >= 100)
	{
		//计算相应的折扣
		discount = total_cost * 0.2;
	}
	if (ch == 'y' && total_cost >= 100)
	{
		//计算相应的折扣
		discount = total_cost * 0.3;
	}
	pay = total_cost - discount;
	// 控制输出格式保留两位数
	cout << "\n总金额 = " << fixed << setprecision(2) << total_cost << "元\n";
	cout << "\n折扣金额 = " << discount << "元\n";
	cout << "\n应付总额 = " << pay << "元\n";
	*/

	//练习一,实现3个数的排序
	/*
	//定义x，y，z三个数，用t表示中间变量
	int x, y, z, t;
	cout << "请输入3个整数：\n";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "输入的3个数分别是 ：" << x << "," << y << "," << z << "\n";
	if (x > y)
	{
	// x>y时，交换x和y的值
	t = x;
	x = y;
	y = t;
	}
	if (x > z)
	{
	//x > z时，交换x和z的值
	t = x;
	x = z;
	z = t;
	}
	if (y > z)
	{
	// y > z时，交换y和z的值
	t = y;
	y = z;
	z = t;
	}
	cout << "从小到大的排序为：" << x << "," << y << "," << z << "\n";
	*/

	// 使用循环模拟拳皇对战
	//巴神的HP
	/*
	int hp1 = 100;
	int hp2 = 100;

	int attack1 = 0; //巴神的攻击力
	int attack2 = 0; //草薙京的攻击力
	int randNum; //用来存放玩家攻击先后的随机数变量

	srand(time(NULL));


	while (hp1 >= 0 && hp2 >= 0)//
	{
	// 模拟玩家出招：可以采用随机数是奇数/偶数的方式来决定谁先进行攻击
	//奇数-巴神先出招，偶数- 草薙京先出招
	randNum = rand();
	if (randNum % 2 == 1)
	{//奇数
	attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
	attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

	hp2 -= attack1; //互相掉血
	hp1 -= attack2;
	}
	else
	{//偶数
	attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
	attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

	hp1 -= attack2; //互相掉血
	hp2 -= attack1;
	}
	}
	// 2、打印对战的最终结果
	cout << "巴神HP:" << hp1 << endl;
	cout << "草薙京HP:" << hp2 << endl;
	*/
	
	/*int n = 0;
	while (n++ <= 2);  //<=> while(n <= 2) n++
	cout << n;*/
	
	/*int k = 1, n = 10, m = 1;
	while (k <= n)
	{
		m *= 2;
		n--;
	}
	cout << m;*/

	// 某宝双十一2015年的交易额为800亿，每年递增25%
	//问：按此速度哪年交易额达到2000亿？
	/*
	double money = 800.0;
	int year = 2015;

	while (money < 2000) {
	year++;
	money = money *(1 + 0.25);
	cout << "到" << year << "年，营业额达到" << money << "亿！" << endl;
	}
	cout << "到" << year << "年，营业额达到" << money << "亿！" << endl;
	*/
	

	// 使用循环实现三次密码输入错误退出系统
	// 本代码不完整，后续自己修正
	/*
	string password;	//密码
	int i = 0;			//循环变量，控制循环次数
	while (i < 3)
	{
		cout << "请输入密码：" << endl;
		cin >> password;
		cout << "您输入的密码是：" << password << endl;
		i++;
		//判断用户输入的是否正确
		if (password != "12345678")
		{
			if (i == 3)
			{
				cout << "3次密码输入错误，系统强制退出！" << endl;
				exit(123456);
			}
		}
	}*/

	// 使用循环计算1-100的累加和
	//需要循环变量
	//需要累加和变量
	//循环
	/*
	int num = 1; //用来控制循环次数的变量
	int sum = 0; // 用来保存累加和的变量
	while (num <= 100) {
		//sum = sum + num;
		sum += num;
		cout << num << num << endl;
		num++;
	}
	cout << "1-100的累加和为：" << sum << endl;
	*/

	/*int choice = 1;
	switch (choice)
	{
	case 1:
		cout << 1 << endl;
		break;
	case 2:
		cout << 2 << endl;
		break;
	case 3:
		cout << 3 << endl;
		break;
	case 4:
		cout << 4 << endl;
		break;
	default:
		break;
	}*/

	/*double flowerPrice;
	//打印剧情
	cout << "黎明前的黑暗渐渐褪去......" << endl;
	cout << "A送花给B，B问这花多少钱？" << endl;
	cin >> flowerPrice;
	if (flowerPrice >= 50000)
	{
		cout << "领证" << endl;
	}
	else if (flowerPrice >= 10000 && flowerPrice < 50000)
	{
		cout << "" << endl;
	}
	else
	{

	}*/
	cin.get();
	cin.get();
    return 0;
}

