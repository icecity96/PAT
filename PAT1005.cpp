/*=============================================================================================
1005. 继续(3n+1)猜想 (25)

卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。

当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对n=3进行验证的时候，我们需要计算3、5、8、4、2、1，则当我们对n=5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，我们称5、8、4、2是被3“覆盖”的数。我们称一个数列中的某个数n为“关键数”，如果n不能被数列中的其他数字所覆盖。

现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。
==============================================================================================*/
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
set<int> res_t;
vector<int> temp;
vector<int> res;
void addRes(int& lhs)
{
  if (res_t.find(lhs)==res_t.end())
  {
    res.push_back(lhs);
  }
}
void print(int& lhs)
{
  cout << lhs << " ";
}

int main(void)
{
  
  int n;
  cin >> n;
  while (n!=0)
  {
    n--;
    int a;
    cin >> a;
    temp.push_back(a);
    while (a != 1 &&!binary_search(res.begin(),res.end(),a))
    {
      if (a % 2 == 0)
      {
        a /= 2;
        if (!binary_search(res.begin(), res.end(), a))
          res_t.insert(a);
      }
      else
      {
        a = (3 * a + 1) / 2;
        if(!binary_search(res.begin(), res.end(), a))
          res_t.insert(a);
      }
    }
  }
  for_each(temp.begin(), temp.end(), addRes);
  sort(res.begin(), res.end(),greater<int>());
  for_each(res.begin(), res.end()-1, print);
  cout << *res.rbegin()<<endl;
  return 0;
}
