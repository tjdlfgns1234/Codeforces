#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL);
	cout.tie(NULL), cin.tie(NULL);

	int t;
	cin >> t;
	string s = "989";
	while (t--)
	{
		int n;
		cin >> n;
		if (n <= 3)
			cout << s.substr(0, n) << '\n';
		else
		{
			cout << s;
			for (int i = 3; i < n; i++)
				cout << (i - 3) % 10;
			cout << '\n';
		}
	}

	return 0;
}