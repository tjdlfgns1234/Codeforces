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
		int n, m;
		cin >> n >> m;

		vector<int>a(n);
		for (auto& i : a)
			cin >> i;
		vector <int> b(n);
		for (auto& i : b)
			cin >> i;
		vector <int> c(m);
		for (auto& i : c)
			cin >> i;
		vector <int> ans(m);
		multimap <int, int> mp;  // key  colour, value : index , 반드시 칠해야되는 색!
		multimap <int, int> mp2;  // key  colour, value : index , 안칠해도 되는 색만!
		for (int i = 1; i < n + 1; i++)
			if (a[i-1] != b[i-1])
				mp.insert({ b[i - 1],i });
			else
				mp2.insert({ b[i - 1],i });
		bool chk = false;
		int tmp = -1;
		for (int i = 0; i < m; i++)
		{
			if (!mp.empty())
				if (mp.find(c[i]) != mp.end())
				{
					ans[i] = mp.find(c[i])->second, mp.erase(mp.find(c[i]));
					tmp = ans[i];
					continue;
				}
				else
				{
					if (!mp2.empty())
						if (mp2.find(c[i]) != mp2.end())
						{
							ans[i] = mp2.find(c[i])->second, mp2.erase(mp2.find(c[i]));
							tmp = ans[i];
						}
						else
							continue;
				}
			else
			{
				if (!mp2.empty())
					if (mp2.find(c[i]) != mp2.end())
					{
						ans[i] = mp2.find(c[i])->second, mp2.erase(mp2.find(c[i]));
						tmp = ans[i];
					}
					else
						continue;
			}
		}
		if(!mp.empty())  // 못 칠해야 될 색을 못칠한 경우
			cout << "NO" << '\n';
		else   // 칠해야될 색을 다칠한 경우
		{	
			if (tmp != -1)  // 남은거는 된거 중에서 아무대나 칠함.
				chk = true;
			if (chk)
			{
				cout << "YES" << '\n';
				for (auto i : ans)
					if (i != 0)
						cout << i << ' ';
					else
						cout << tmp << ' ';
				cout << '\n';
			}
			else
				cout << "NO" << '\n';
		}
	}

	return 0;
}