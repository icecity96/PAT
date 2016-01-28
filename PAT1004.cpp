/*===============================================================================
1004. 成绩排名 (20)
读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
输入格式：每个测试输入包含1个测试用例，格式为
  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
===============================================================================*/

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
using namespace std;

struct student
{
  string st_name;
  string id_number;
  int source;
};

struct cmpStudent :
  public binary_function<student&, student&, bool>
{
  bool operator()(student& rhs, student& lhs)
  {
    return rhs.source > lhs.source;
  }
};
int main()
{
  int n;
  cin >> n;
  vector<student> res;
  while (n!=0)
  {
    n--;
    student temp;
    cin >> temp.st_name >> temp.id_number >> temp.source;
    res.push_back(temp);
  }
  sort(res.begin(), res.end(), cmpStudent());
  cout << (*res.begin()).st_name << " " << (*res.begin()).id_number << endl;
  cout << (*res.rbegin()).st_name << " " << (*res.rbegin()).id_number << endl;
  return 0;
}
