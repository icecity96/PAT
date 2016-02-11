#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int a[4];
int temp;
void fun()
{
	a[0] = temp%10;
	a[1] = temp%100/10;
	a[2] = temp/100%10;
	a[3] = temp/1000;
	sort(a,a+4);
	temp = a[0]+a[1]*10+a[2]*100+a[3]*1000-(a[3]+a[2]*10+a[1]*100+a[0]*1000);
	cout<<setfill('0')<<setw(4)<<a[0]+a[1]*10+a[2]*100+a[3]*1000<<" - "<<setfill('0')<<setw(4)<<(a[3]+a[2]*10+a[1]*100+a[0]*1000)<<" = "<<setfill('0')<<setw(4)<<temp<<endl;;

}
int main(int argc, char **argv) {
	cin >> temp;
	do
	{
		fun();
	}
	while(temp!=0 && temp!=6174);
	return 0;
}
