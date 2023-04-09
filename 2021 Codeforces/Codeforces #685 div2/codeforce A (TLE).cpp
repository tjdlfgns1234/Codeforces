#include <iostream>
#include <algorithm>
#include <map>
#define MAX 1000000001
using namespace std;

map<long long, long long> dp;
long long move(long long n, long long cnt,bool check);
bool check = false;

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
		check = false;
		if (dp.find(x) != dp.end())
		{
			cout << dp[x] << "\n";
		}
		else
		{
			dp[x] = move(x, 1,false);
			cout << dp[x] << "\n";
		}
			
	}

	return 0;
}
long long move(long long n, long long cnt,bool check)
{
	if (check)
		return cnt - 1;
	else if (n == 1)
		return cnt - 1;
	else if (n == 0)
		return  cnt - 1;
	else if (dp.find(n) != dp.end())
		return dp[n] + cnt - 1;

	long long a, b = MAX;
	for (long long i = n / 2; i > 1; i--)
		if (n % i == 0)
			b = min(b, move(n / i, cnt + 1,check));
	a = move(n - 1, cnt + 1, check);

	return min(a, b);
}