/*=====================================================================================
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。
======================================================================================*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool judge(string& input);
bool not_match(char& lsh)
{
  return lsh!='A'&&lsh!='P'&&lsh!='T';
}
int main(int argc, char **argv) {
  int n;
  cin >> n;
  while(n!=0)
  {
    n--;  
    string input;
    cin >> input;
    cout << (judge(input)?"YES":"NO")<<endl;
  }
  return 0;
}

bool judge(string& input)
{
  if(find_if(input.begin(),input.end(),not_match) != input.end())  
  {
    return false;  
  }
  else
  {
    string temp = input;
    auto pit = find(input.begin(),input.end(),'P');
    auto tit = find(input.begin(),input.end(),'T');
    if(distance(input.begin(),pit)*(distance(pit,tit)-1)==distance(tit,input.end()-1) && distance(pit,tit)!=1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}
