/*==========================================================================================
1007. 素数对猜想 (20)
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数
=================================================================================================*/
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
	int n,m;
	cin >> n >> m;
	for(int i = n-1; i < m; ++i)
	{
		cout << isprime[i] << (((i-n+2)%10==0 || i==m-1)?'\n':' ');
	}
	return 0;
}
