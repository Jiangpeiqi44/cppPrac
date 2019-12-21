

#include <iostream>
using namespace std;
//test
数组类型名 *arrag(指针类型 *pt)
{
	int ptSize = 数组元素个数;
	int box = ptSize - 1;
	int pos;
	int intern_times = 1, extern_times = 1;
	while (box)
	{
		pos = box;
		box = 0;
		for (int i = 0; i < pos; i++)
		{
			if (pt[i] > pt[i + 1])
			{
				数组类型名 tmp;
				tmp = pt[i];
				pt[i] = pt[i + 1];
				pt[i + 1] = tmp;
				box = i;
				intern_times++;
			}
		}
		extern_times++;
	}
	return pt;
}

int main()
{
	int num;
	cin >> num;
	cin.get();
	int *pt = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> pt[i];
	}

	int ptSize = num;
	int box = ptSize - 1;
	int pos;
	int intern_times = 1, extern_times = 1;
	while (box)
	{
		pos = box;
		box = 0;
		for (int i = 0; i < pos; i++)
		{
			if (pt[i] > pt[i + 1])
			{
				int tmp;
				tmp = pt[i];
				pt[i] = pt[i + 1];
				pt[i + 1] = tmp;
				box = i;
				intern_times++;
			}
		}
		extern_times++;
	}
	cout << "排序为：" << endl;
	for (int i = 0; i < ptSize; i++)
		cout << pt[i] << " ";
	cout << endl
		 << "循环次数:"
		 << "内循环"
		 << intern_times
		 << " "
		 << "外循环"
		 << extern_times << endl;
	delete[](pt);
	pt = NULL;
	return 0;
}
