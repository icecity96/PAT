/*===================================================================================================
1002. 写出这个数 (20)
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
====================================================================================================*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <string>
#include <cstring>
#include <cstdio>
#include <set>
#include <deque>
using namespace std;

int total = 0;
void print(string &lsh)
{
  cout << lsh << " " ;
}

void addtotal(char &lsh)
{
  total += lsh - '0';
}

int main()
{
  string a;
  cin >> a;
  deque<string> res;
  string a2[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
  for_each(a.begin(), a.end(), addtotal);
  while (total!=0)
  {
    int temp = total % 10;
    total /= 10;
    res.push_front(a2[temp]);
  }
  for_each(res.begin(), res.end()-1, print);
  cout << *res.rbegin() << endl;
  return 0;
}
