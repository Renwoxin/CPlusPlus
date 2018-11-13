// SixTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//求1-100之间的偶数和
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		//跳过所有奇数
		if (i % 2 == 1)
			continue;
		sum += i;
	}
	cout << "1-100之间的偶数和为： " << sum << endl;


	//循环输入5个玩家的消费，统计消费额低于500的玩家数量
	/*double money; //玩家的消费
	int count = 0;	// 低于500玩家的数量（计数器）
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入当前玩家的消费额： ";
		cin >> money;
		if (money >= 500)
			continue;
		count++;
	}
	cout << "消费额低于500的玩家数量是：" << count << endl;*/

	//随堂练习
	//幸运53猜商品价格游戏
	//根据猜的次数给予不同的奖励
	//1次：iPhone8P
	//2~3次：小米移动电源
	//5次以内：VR眼镜
	/*const double PRICE = 5000.0;	//商品价格
	double guessPrice = 0;	//用户猜测的商品价格
	double guessCount = 0;	//用户猜测的次数

	//游戏实际上是一个死循环
	for (;;) {
		// 每猜一次，次数加1,放在猜前方便计数，不然猜对的那一次就不能计数
		guessCount++;
		cout << "请输入商品价格：";
		cin >> guessPrice;
		if (guessPrice > PRICE)
		{
			cout << "大了！" << endl;
		}
		else if (guessPrice < PRICE)
		{
			cout << "小了！" << endl;
		}
		else
		{
			cout << "恭喜您，猜对了！" << endl;
			break;
		}
	}
	if (guessCount == 1) {
		cout << "中iPhone8P！！！" << endl;
	}
	else if (guessCount >= 2 && guessCount <= 3) {
		cout << "中小米移动电源！！！" << endl;
	}
	else if (guessCount >= 4 && guessCount <= 5) {
		cout << "中VR眼镜！！！" << endl;
	}
	else {
		cout << "谢谢惠顾！！！" << endl;
	}*/
	
	//1997年7月月历
	//1、定义变量
	/*int day = 31;	//7月共31天
	int dayofWeek = 2;	//7月第一天是周二
	cout << "一\t二\t三\t四\t五\t六\t日" << endl;
	for (int i = 0; i < dayofWeek - 1; i++)
	{
	cout << '\t';
	}
	//2、书写循环
	//打印日子,7月有31天，所以用for循环打印31天
	for (int i = 0; i < day; i++) {
	cout << i + 1;
	//到底是打印\n还是\t,按照7的倍数来计算
	if ((i + dayofWeek) % 7 == 0)
	{
	cout << '\n';
	}
	else
	{
	cout << '\t';
	}
	}
	*/
	
	cin.get();
	cin.get();
    return 0;
}

