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
		int n;
		cin >> n;
		if (n % 2020 <= n / 2020)
			cout << "YES" << "\n";
		else
			cout << "NO" << '\n';
	}
	return 0;
}