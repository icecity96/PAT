#include <iostream>
#include <vector>

#define MAX_NUMBER 100000
using namespace std;
//the way to prime
void makePrimes(int primes[], int num)
{
    int i, j, cnt;
    
    primes[0] = 2;
    primes[1] = 3;
    
    for(i = 5, cnt = 2; cnt < num; i += 2)
    {
        int flag = true;
        for(j = 1; primes[j]*primes[j] <= i; ++j)
        {
            if(i%primes[j] == 0)
            {
                flag = false; break;
            }
        }
        if(flag) primes[cnt++] = i;
    }
}
int isprime[MAX_NUMBER];
int main(int argc, char **argv) {
	makePrimes(isprime,MAX_NUMBER);
	int n;
	int total = 0;
	cin >> n;
	for(int i = 0,j=1; isprime[j] <= n; ++i,++j)
	{
		if(isprime[j]-isprime[i]==2)
			total++;
	}
	cout << total <<endl;
	return 0;
}
