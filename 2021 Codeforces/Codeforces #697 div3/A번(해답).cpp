#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		if (n & (n - 1))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}