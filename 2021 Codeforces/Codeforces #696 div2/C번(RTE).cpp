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
		vector <int> arr(2 * n);
		for (auto& i : arr)
			cin >> i;

		sort(arr.begin(), arr.end(), less<int>());
		queue <int> q2;
		priority_queue <int,vector<int>> pq;
		vector <int> ans;
		int idx = 2 * n - 2;
		int x = arr[2 * n - 1] + arr[2 * n - 2];
		int now = 0;
		bool chk = false;
		while (1)
		{
			for (auto i : arr)
				pq.push(i);
			now = pq.top();
			pq.pop();
			while (1)
			{
				if (x == pq.top() + now)
				{
					ans.push_back(pq.top()), ans.push_back(now);
					int tmp = pq.top();
					x = max(tmp, now), pq.pop(); 
					while (!q2.empty())
					{
						pq.push(q2.front());
						q2.pop();
					}
					now = pq.top();
					pq.pop();
				}
				else
					q2.push(pq.top()), pq.pop();

				if (now >= x)
					break;
				if (pq.empty())
					break;
			}
			while (!pq.empty())
				pq.pop();
			while (!q2.empty())
				q2.pop();
			if (ans.size() == 2 * n)
			{
				chk = true;
				break;
			}
			idx--;
			if (idx == -1)
				break;
			x = arr[2 * n - 1] + arr[idx];
		}
		if (chk)
		{
			cout << "YES" << '\n';
			for (int i = 0; i < n; i++)
				cout << ans[i] << ' ' << ans[i + 1] << '\n';
		}
		else
			cout << "NO" << '\n';
	}

	return 0;
}