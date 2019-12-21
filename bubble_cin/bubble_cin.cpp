#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <cmath>
using namespace std;
void dxxx();
int main()
{
	initgraph(400, 400);
	dxxx();
	getch();
}
void dxxx()
{
	float r = 20, x, y; float i;
	for (i = 0; i <= 100; i = i + 0.1)
	{
		x = r * (2 * cos(i) - cos(2 * i)) + 200;
		y = r * (2 * sin(i) - sin(2 * i)) + 200;
		putpixel(x, y, YELLOW);
		Sleep(5);
	}
}