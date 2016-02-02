#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	vector<string> day = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int ans_1;
	int ans_2;
	int ans_3 = 0;
	int flag=1;
	for(auto i = a.begin(),j = b.begin();i!=a.end()&&j!=b.end();++i,++j)
	{
		if(flag == 1)
		{
			if(*i == *j && 'A' <= *i && *i <= 'G')
			{
				flag = 2;				
				ans_1 = *i - 'A';
			}
		}	
		else
		{
			if(*i==*j && (('A'<=*i && *i <= 'N')||('0'<=*i && *i <= '9')))	
			{
				if('A' <= *i && 'N' >= *i)
				{
					ans_2 = 10 + *i - 'A';		
				}	
				else
				{
					ans_2 = *i - '0';
				}
				break;
			}
		}
	}
	for(auto i = c.begin(),j = d.begin();i!=c.end()&&j!=d.end();++i,++j)
	{
		if(*i == *j&&(('a'<=*i&&'z'>=*i)||('A'<=*i&&'Z'>=*i))) break;
		++ans_3;	
	}
	cout << day[ans_1]<<" "<<setfill('0')<<setw(2)<<ans_2<<":"<<setfill('0')<<setw(2)<<ans_3<<endl;
	return 0;
}
