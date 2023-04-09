#include <bits/stdc++.h>
#define ll long long

using namespace std;
void solve();

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
void solve()
{
	int n;
	cin >> n;
	bool chk = false;
	ll* a = new ll[2 * n];

	for (int i = 0; i < 2 * n; i++)
		cin >> a[i];
	ll MAX = -1, j = -1;

	for (int i = 0; i < 2 * n; i++)
		if (MAX < a[i])
		{
			// 최댓값 찾기
			MAX = a[i];
			j = i;
		}

	for (int i = 0; i < 2 * n; i++)
	{
		if (j == i)
			continue;
		// 완전탐색 풀이
		vector <ll> ans;
		multiset <ll> ms;

		for (int j = 0; j < 2 * n; j++)
			ms.insert(a[j]);

		ll x = MAX + a[i];
		bool flag = false;
		// multiset을 이용하여 큰 값과 짝지어서 계속 빼줌
		while (!ms.empty())
		{
			ll mx = *ms.rbegin();
			ms.erase(ms.find(mx));
			if (ms.find(x - mx) == ms.end())
			{
				// 가장 큰 수를 뺼 수 없을 때는 "NO"!
				// why? => 가장 큰수가 무조건 배열에 남기 때문에 모두 지울수 없음.
				flag = true;
				break;
			}
			ms.erase(ms.find(x - mx));  // O(logN), 위치가 주어져 있으면 O(1)
			ans.push_back(mx);
			ans.push_back(x - mx);
			swap(x, mx); // x = max(a,b)
		}
		if (!flag)
		{
			cout << "YES" << '\n';
			cout << MAX + a[i] << '\n';
			for (int i = 0; i < 2 * n; i += 2)
				cout << ans[i] << ' ' << ans[i + 1] << '\n';
			return;
		}
	}
	cout << "NO" << '\n';
}