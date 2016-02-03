#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(int argc, char **argv) {
	string a,b;
	char da,db;
	int ansa = 0;
	int ansb = 0;
	cin >> a >> da >> b >> db;
	for(auto x:a)
	{
		if(x==da) ansa = ansa*10 + x-'0';
	}
	for(auto x:b)
	{
		if(x==db)  ansb = ansb*10 + x-'0';
	}
	cout << ansa+ansb << endl;
	return 0;
}
