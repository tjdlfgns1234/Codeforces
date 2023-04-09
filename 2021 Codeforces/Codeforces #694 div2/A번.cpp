#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		ll n,x;
		cin >> n >> x;
		vector <int> arr(n);
		ll sum = 0;
		for (auto &i : arr)
			cin >> i, sum += i;
		ll MAX = 0LL;
		ll MIN = sum / x;
		if (sum % x != 0)
			MIN += 1;
		for (int i = 0; i < n; i++)
		{
			MAX += arr[i] / x;
			if (arr[i] % x != 0)
				MAX += 1;
		}
		cout << MIN << ' ' << MAX << '\n';
	}

	return 0;
}
