// MyPrincess.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <array>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	//1、为父女取名字
	/* 父亲的名字 */
	string value_father_name;
	/* 女儿的姓名 */
	string value_duagther_name;
	/* 女儿生日的月份 */
	int value_brith_month = 6;
	/* 女儿生日的日期 */
	int value_birth_date = 26;
	/* 女儿的星座 */
	string value_dauthger_constell;
	/** 女儿的五项基本信息：体力、智力、魅力、道德、气质 */
	//int value_dauthger_baseinfos[5];
	//vector<int> value_vec_baseinfo;
	array<int, 5> value_array_baseinfo;
	/** 五项基本属性名 */
	array<string, 5> value_array_baseinfo_names = { "体力","智力","魅力","道德","气质" };
	int value_dauthger_gold = 500;
	string constells_name[12][2] = {
		{"山羊座","水瓶座"},	//一月 
		{ "水瓶座","双鱼座" },	//二月
		{ "双鱼座","白羊座" },	//三月
		{ "白羊座","金牛座" },	//四月
		{ "金牛座","双子座" },	//五月
		{ "双子座","巨蟹座" },	//六月
		{ "巨蟹座","狮子座" },	//七月
		{ "狮子座","处女座" },	//八月
		{ "处女座","天秤座" },	//九月
		{ "天秤座","天蝎座" },	//十月
		{ "天蝎座","射手座" },	//十一月
		{ "射手座","山羊座" },	//十二月
	};
	int choice, temp1, temp2, temp3;

	//2、为女儿录入初始信息生日、星座
	//	根据女儿的星座，设置游戏的基本参数（体力、智力、魅力、道德、气质）
	cout << "父亲的姓名：";
	cin >> value_father_name;
	cout << "女儿的姓名：";
	cin >> value_duagther_name;
	cout << "女儿的生日（MM DD）：";
	cin >> value_brith_month >> value_birth_date;

	/** 各月份的跨星座日期 */
	int constell_dates[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
	cout << constells_name[value_brith_month - 1][value_birth_date / constell_dates[value_brith_month]] << endl;

	cout << "女儿的信息：";
	cout << "姓名：" << value_duagther_name << endl;
	cout << "生日：1659-" << value_brith_month << "-" << value_birth_date << endl;
	cout << "星座：" << value_dauthger_constell << endl;

	if (value_dauthger_constell == "白羊座") {
		value_array_baseinfo[0] = 80; value_array_baseinfo[1] = 15; value_array_baseinfo[2] = 15; value_array_baseinfo[3] = 11; value_array_baseinfo[4] = 21;
	}
	else if (value_dauthger_constell == "金牛座") {
		value_array_baseinfo[0] = 46; value_array_baseinfo[1] = 30; value_array_baseinfo[2] = 28; value_array_baseinfo[3] = 20; value_array_baseinfo[4] = 29;
	}
	else if (value_dauthger_constell == "双子座") {
		value_array_baseinfo[0] = 50; value_array_baseinfo[1] = 35; value_array_baseinfo[2] = 23; value_array_baseinfo[3] = 8; value_array_baseinfo[4] = 20;
	}
	else if (value_dauthger_constell == "巨蟹座") {
		value_array_baseinfo[0] = 40; value_array_baseinfo[1] = 15; value_array_baseinfo[2] = 15; value_array_baseinfo[3] = 16; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "狮子座") {
		value_array_baseinfo[0] = 85; value_array_baseinfo[1] = 9; value_array_baseinfo[2] = 11; value_array_baseinfo[3] = 16; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "处女座") {
		value_array_baseinfo[0] = 80; value_array_baseinfo[1] = 28; value_array_baseinfo[2] = 36; value_array_baseinfo[3] = 18; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "天秤座") {
		value_array_baseinfo[0] = 80; value_array_baseinfo[1] = 33; value_array_baseinfo[2] = 25; value_array_baseinfo[3] = 32; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "天蝎座") {
		value_array_baseinfo[0] = 80; value_array_baseinfo[1] = 25; value_array_baseinfo[2] = 40; value_array_baseinfo[3] = 18; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "射手座") {
		value_array_baseinfo[0] = 80; value_array_baseinfo[1] = 31; value_array_baseinfo[2] = 15; value_array_baseinfo[3] = 19; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "山羊座") {
		value_array_baseinfo[0] = 56; value_array_baseinfo[1] = 21; value_array_baseinfo[2] = 16; value_array_baseinfo[3] = 25; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "水瓶座") {
		value_array_baseinfo[0] = 43; value_array_baseinfo[1] = 43; value_array_baseinfo[2] = 20; value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 80;
	}
	else if (value_dauthger_constell == "双鱼座") {
		value_array_baseinfo[0] = 41; value_array_baseinfo[1] = 21; value_array_baseinfo[2] = 29; value_array_baseinfo[3] = 23; value_array_baseinfo[4] = 80;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << value_array_baseinfo[i] << '\t';
	}
	cout << endl;
	
	//3、开始游戏大循环
	// 游戏从1659年6月开始
	for (int year = 1659; year <= 1659 + 7; year++) {
		for (int month = (year == 1659) ? 6 : 1; month <= 12; month++) {
		//判断本月是否是女儿的生日
			if (month == value_brith_month) {
				cout << "本月是" << value_duagther_name << "生日，要不要送礼物呢？" << endl;
				//根据用户输入进行判断
			}
			//显示游戏主菜单
			cout << "\n1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档\n5、读档" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1://查看状态
				cout << "女儿的信息:\n";
				cout << "姓名：" << value_duagther_name << endl;
				cout << "生日： 1659-" << value_brith_month << "-" << value_birth_date << endl;
				cout << "星座：" << value_dauthger_constell << endl;
				cout << "金币：" << value_dauthger_gold;
				//打印核心属性
				cout << left;
				for (int i = 0; i < 5; i++)
				{
					cout << value_array_baseinfo_names[i] << ":" << setw(2) << value_array_baseinfo[i];
					//计算实心方框的数量
					int solidCount = value_array_baseinfo[i] / 10;
					for (int j = 0; j < 10; j++) {
						if (j <= solidCount)
							cout << "■";
						else
							cout << "◯";
					}
					cout << endl;
				}
			case 2: {//安排行程:一个月最多安排3个行程
				string month_parts[] = { "上旬","中旬","下旬" };
				for (int i = 0; i < 3; i++)
				{
					cout << "--" << month << "月 --" << month_parts[i] << endl;
					cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城休息\n5、打工赚钱" << endl;
					cout << "请选择：";
					cin >> choice;
					//注意：需要进行判断没钱的情况——强制打工
					srand(time(NULL));
					if (choice == 1) {//+体力 +魅力 -金钱
						value_array_baseinfo[0] += temp1 = rand() % 11;
						value_array_baseinfo[2] += temp2 = rand() % 11;
						value_dauthger_gold += temp3 = rand() % 51;
						cout << "好好学习好榜样！！！" << endl;
						cout << "体力+" << temp1 << ",魅力+" << temp2 << "，金钱-" << temp3 << endl;
					}
					else if (choice == 5) {
						value_dauthger_gold += temp3 = rand() % 101;
						cout << "通过努力打工，赚到了" << temp3 << "个金币！" << endl;
					}
				}

				break;
			}
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				break;
			}
		}
	}
	//4、根据各项参数判定游戏结果

	int sum = 0; 
	for (int i = 0; i < 5; i++)
	{
		sum += value_array_baseinfo[i];
	}
	if (sum >= 2000) {
		cout << "最优游戏结果：女王" << endl;
	}
	else if (sum >= 1800 && sum < 2000) {
		cout << "游戏结果：王妃" << endl;
	}
	else if (sum >= 1200 && sum < 1600) {
		int maxValue = value_array_baseinfo[0];
		int maxIndex = 0;
		for (int i = 0; i < 5; i++) {
			if (maxValue < value_array_baseinfo[i])
			{
				maxValue = value_array_baseinfo[i];
				maxValue = i;

			}
		}
		if ("道德" == value_array_baseinfo_names[maxIndex] && value_array_baseinfo[2] > value_array_baseinfo[4]) {
			cout << "经过长期的训练，" << value_duagther_name << "成长成为了一个高级祭司！" << endl;
		}
	}

	cin.get();
	cin.get();
    return 0;
}

