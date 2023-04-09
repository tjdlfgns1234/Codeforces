#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL);
	cout.tie(NULL), cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int w, h, n;
		cin >> w >> h >> n;
		int ans = 1,cnt = 0;
		while (1)
		{
			if (w % 2 == 0)
			{
				w = w / 2;
				cnt++;
			}
			if (h % 2 == 0)
			{
				h = h / 2;
				cnt++;
			}
			if (h % 2 == 1 && w % 2 == 1)
				break;
		}

		for (int i = 0; i < cnt; i++)
		{
			ans *= 2;
		}

		if (ans >= n)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

	}

	return 0;
}