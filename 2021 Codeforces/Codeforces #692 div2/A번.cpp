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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == ')')
				ans++;
			else
				ans = 0;
		}
		if (n/2 - ans < 0)
			cout << "Yes" << '\n';
		else
			cout << "No" << "\n";
	}

	return 0;
}