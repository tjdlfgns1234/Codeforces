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
		int cnt[101] = { 0 };

		int tmp;
		for (int i = 0; i < n; i++)
			cin >> tmp, cnt[tmp]++;
		int MAX = 1;
		for (int i = 0; i < n + 1; i++)
			MAX = max(MAX, cnt[i]);
		cout << MAX << '\n';
	}
	return 0;
}