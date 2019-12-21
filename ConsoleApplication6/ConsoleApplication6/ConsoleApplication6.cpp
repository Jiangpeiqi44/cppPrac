// ConsoleApplication6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include"pch.h"
#include"stdlib.h"
#include<stdio.h>
#define NUM 2
#define ZERO 0.000001
//整数部分的转换
void integer(int n)
{
	if (n > 0)
	{
		integer(n / NUM);
		printf("%d", n%NUM);
	}
}
//小数部分的转换
void decimal(double m)
{
	if (m > ZERO)
	{
		m = m * NUM;
		printf("%d", (long)m);
		decimal(m - (long)m);
	}
}
int main()
{
	double f;
	long n;
	printf("请输入一个10进制的小数:");
	scanf("%lf", &f);
	if (f < 0)
	{
		printf("-");
		f = -f;
	}
	n = (long)f;//整数部分
	printf("转换成%d进制的小数为:", NUM);
	integer(n);
	printf(".");
	decimal(f - n);//小数部分的转换
	printf("\n");
	system("pause");
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
