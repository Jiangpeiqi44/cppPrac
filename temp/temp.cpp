
#include<iostream>
using namespace std;
int love = 0, time = 0;                                             //人生若只如初见
const char heart = 3;                                          //爱你的心是常变量，不会更变
void Miss() {
	for (love = 0; love <= 10; love++)                         //情思相牵，催长着我的思念
	{
		if (love == 2 || love == 3 || love == 7 || love == 8)
		{
			cout << heart;
		}
		else cout << '\0';
	}
	cout << endl;
	for (time = 0; time <= 9; time++)                         //伴着岁月的流泻
		if (time >= 1 && time != 5)
		{
			cout << heart;
		}                                                 //渐渐浮现
		else cout << '\0';
	cout << endl;
}                                                     //却怎敌，记忆的时限？
void Forget() {
	love = 0, time = 0;                                                  //流岚清风浣素月
	do {
		for (love = 0; love <= 10; love++)
			if (love >= time && love <= 10 - time)                        //谁把爱筑起，谁把爱拆卸
			{
				cout << heart;
			}                                                //我心依然
			else cout << '\0';                                                //只是爱在消散
		time++;                                                            //光阴荏苒
		cout << endl;                                                     //莫道旧日不还
	} while (time <= 2);                                              //轮回纠缠                                                               
	do {
		for (love = 0; love <= 10; love++)
			if (love >= time + 1 && love <= 9 - time)
			{
				cout << heart;
			}                                                 //终是风流云散
			else cout << '\0';
		time++;
		cout << endl;
	} while (time <= 4);
}
int main() {
	Miss();                                                                  //爱，是永不止息的思念
	Forget();                                                              //心甘情愿的牵绊                                
	return 0;                                                              //却逃不脱，一场空的夙缘

}