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
		int n;
		cin >> n;
		long long* arr = new long long[n+1];
		bool* visit = new bool[n+1];
		long long ans = 0LL;
		for (int i = 1; i < n+1; i++)
			cin >> arr[i], visit[i] = false;
		long long idx;
		long long sum = 0;
		for (int i = 1; i < n+1; i++)
		{
			idx = i;
			sum = 0;
			while (1)
			{
				if (!visit[idx])
				{
					sum += arr[idx];
					ans = max(sum, ans);
					visit[idx] = true;
					idx = idx + arr[idx];
					if (idx > n)
						break;
				}
				else
					break;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}