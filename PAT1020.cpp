#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <iomanip>
bool cmp(std::pair<int,double> &lhs,std::pair<int,double> &rhs)
{	
	return lhs.second > rhs.second;
}

int main(int argc, char *argv[])
{
	int a, b;
	std::cin >> a >> b;
	std::vector<std::pair<int,double> > v;
	v.reserve(a);
	int c = a;
	while (c != 0) {
		c--;
		std::pair<int,double> temp;
		std::cin >> temp.first;
		v.push_back(temp);
	}
	for (auto i = v.begin();i != v.end();i++) {
		std::cin >> i->second;	
		i->second = i->second /i->first;
	}
	sort(v.begin(),v.end(),cmp);
	double total = 0.0;
	for (auto i : v) {
		if (b >= i.first) {
			b -= i.first;	
			total += i.first * i.second;
		}	
		else if (b > 0) {
			total += i.second * b;
			b = 0;
		}
		else {
			break;
		}
	}
	std::cout << std::setiosflags(std::ios::fixed)<<std::setprecision(2)<<total;
	return 0;
}
