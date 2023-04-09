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

		ll mod = sqrt(n);
		bool chk = false;
		while (1)
		{
			if (n % 2 == 1)
			{
				chk = true;
				break;
			}
			n = n / 2 + n % 2;
			if (n == 1 || n == 0)
				break;
		}

		if (chk)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}