#include <iostream>

using namespace std;
int main(int argc, char **argv) {
	long long a,b,c;
	int n;
	int cnt=0;
	cin >> n;
	while(n!=0)
	{
		n--;
		cin >> a >> b >> c;
		cout << "Case #" << ++cnt <<": " << (a+b>c?"true":"false")<<endl;
	}
	return 0;
}
