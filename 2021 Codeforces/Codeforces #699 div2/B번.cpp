#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

// 1과 범위 마지막 값등 간단한 경우에 대해 처리를 반드시 해주자.

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector <int> h(n);
		for (auto& i : h)
			cin >> i;
		int ans = -1;
		int pre = -1;
		if (k > 10000)
			cout << -1 << '\n';
		else
		{
			int i;
			for (int j = 1; j < k + 1; j++)
			{
				for (i = 1; i < n; i++)
				{
					if (h[i - 1] >= h[i])
						continue;
					else if (h[i - 1] < h[i])
					{
						h[i - 1]++;
						break;
					}
				}
				if (i == n)
				{
					ans = -1;
					break;
				}
				if (j == k)
					pre = i;
			}
			if (pre != -1)
				cout << pre << '\n';
			else
				cout << ans << '\n';
		}
	}

	return 0;
}