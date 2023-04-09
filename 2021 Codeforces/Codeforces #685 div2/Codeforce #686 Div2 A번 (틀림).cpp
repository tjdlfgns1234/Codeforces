#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#define MAX 1000000001
using namespace std;

map<long long, long long> dp;
long long move(long long n, long long cnt);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long t;
	long long x;
	cin >> t;
	for (long long i = 0; i < t; i++)
	{
		cin >> x;
		if (dp.find(x) != dp.end())
		{
			cout << dp[x] << "\n";
		}
		else
		{
			dp[x] = move(x, 1);
			cout << dp[x] << "\n";
		}
			
	}

	return 0;
}
long long move(long long n, long long cnt)
{
	if (n == 1)
		return cnt - 1;
	else if (n == 0)
		return  cnt - 1;
	else if (n == 2)
		return cnt;

	bool prime = false;
	long long ans = MAX;
	for (long long i = 2; i*i <= n; i++)
		if (n % i == 0)
		{
			ans = min(ans, move(i, cnt + 1));
			prime = true;
		}

	if(!prime)
		ans = min(ans, move(n-1, cnt + 1));


	return ans;
}