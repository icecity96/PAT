/*=================================================================================
1010. 一元多项式求导 (25)
设计函数求一元多项式的导数。（注：xn（n为整数）的一阶导数为n*xn-1。）
===================================================================================*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <string>
#include <cstring>
#include <cstdio>
#include <set>
#include <deque>
#include <numeric>
#include <functional>
using namespace std;
void print(int lhs)
{
	cout << lhs << " ";
}
int main()
{
	int a, b;
	vector<int> res;
	while (cin>>a>>b)
	{
		if (b!=0)
		{
			res.push_back(a*b);
			res.push_back(b - 1);
		}
	}
	if (!res.empty()) {
		for_each(res.begin(), res.end() - 1, print);
		cout << *(res.end() - 1) << endl;
	}
	else
	{
		cout << "0 0" << endl;
	}
	return 0;
}
