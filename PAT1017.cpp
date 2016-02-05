#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
	string a;
	int b;
	cin >> a >> b;
	int temp = 0;
	vector<char> c;
	for(auto x:a)
	{
		temp = temp*10+x-'0';
		c.push_back(temp/b+'0');
		temp = temp % b;
	}
	string ans(c.begin(),c.end());
	if(ans[0]=='0' && ans.begin()+1==ans.end())
	{
		cout << "0";
	}
	else
	{
		if(ans[0]=='0')
		{
			string temp(ans.begin()+1,ans.end());
			cout << temp;
		}
		else
		{
			cout << ans;
		}
	}
	cout<<" "<<temp<<endl;
	return 0;
}
