#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[])
{
	std::string N;
	std::cin >> N;
	std::map<char, int> map;
	for (auto i : N) {
		map[i]++;	
	}
	for (auto i : map) {
		std::cout << i.first<<":" <<i.second<< std::endl;	
	}
	return 0;
}
