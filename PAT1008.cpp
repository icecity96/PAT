#include <iostream>

#define MAX_SIZE 100

using namespace std;

int main(int argc, char **argv) {
	int Number[MAX_SIZE];
	int m,n;
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
	{
		cin >> Number[i];
	}
	m = n - m % n;
	int cnt = 0;
	for(int i = m; i < n; ++i)
	{
		cout << Number[i] << (++cnt!=n?" ":"\n");
	}
	if( m != 0 )
		for(int i = 0; i < m; ++i)
		{
			cout << Number[i]<<(i!=m-1?" ":"\n");
		}
	return 0;
}
