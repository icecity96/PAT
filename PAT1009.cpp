#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	vector<string> res;
	string s;
	while(cin >> s)
	{
		res.push_back(s);
	}
	for(auto i=res.rbegin();i!=res.rend();i++)
	{
		cout << *i << (i!=res.rend()-1?" ":"\n");
	}
	return 0;
}
