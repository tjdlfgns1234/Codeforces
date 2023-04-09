#include <algorithm>
#include <iostream>

using namespace std;

unsigned long long dp[1001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	dp[1] = 4;
	dp[2] = 4;
	dp[3] = 12;

	for (unsigned long long i = 4; i < n + 1; i++)
		if (i % 2)  // 홀수
			dp[i] = 4*dp[i-1] - dp[i-2];
		else
			dp[i] = (i/2 + 1)*(i/2+1);

	cout << dp[n];


	return 0;
}