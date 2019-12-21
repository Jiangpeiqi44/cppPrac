// bubble_optimize.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1;
	cout << "请输入小于10的一组数" << endl;
	cin >> str1;
	int len1 = str1.size();
	int box=len1 - 1;
	int pos;
	int intern_times = 1, extern_times = 1;
	while (box) {
		pos = box;
		box = 0;
		for (int i = 0; i < pos; i++) {
			if (str1[i] > str1[i + 1]) {
				int tmp;
				tmp = str1[i];
				str1[i] = str1[i + 1];
				str1[i + 1] = tmp;
				box = i;
				intern_times++;
			}
		}
		extern_times++;
	}
	for (int i = 0; i < len1; i++)
		cout << str1[i] << " ";
	cout << "内循环"
		<< intern_times
		<< " "
		<< "外循环"
		<< extern_times << endl;

}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
