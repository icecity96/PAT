/*
1006. 换个格式输出整数 (15)
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。
例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。
*/
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
int main()
{
	int n;
	cin >> n;
	int a = n / 100;
	n %= 100;
	while (a!=0)
	{
		cout << 'B';
		a--;
	}
	a = n / 10;
	n %= 10;
	while (a!=0)
	{
		cout << 'S';
		a--;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << i;
	}
	cout << endl;
	return 0;
}
