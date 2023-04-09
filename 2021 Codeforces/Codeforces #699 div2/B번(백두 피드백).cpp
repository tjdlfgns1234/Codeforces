#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

/*
	반례
	1
	25 2114
	1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 100
	output : 3
	ans : 23
*/

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout.tie(NULL);

	int t;
	int n, k;
	int h[101];

	cin >> t;
	for (int task = 0; task < t; task++)
	{
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> h[i];
		}

		int i, j;
		for (i = 1; i < n; i++)
		{
			if (h[i] < h[i + 1]) {
				for (j = i; j > 0; j--)
				{
					if (h[j] >= h[i + 1]) break;
					k -= h[i + 1] - h[j]; // 돌의 높이 차만큼 한꺼번에 쌓아감. -> 모든 경우를 생각하지 않음.
					/*
					     1 1 100 => 1 100 100 으로 구해짐. -> -1인 경우는 문제 X, 볼러의 위치를 구할때 반례 존재
						 하지만 답은 50 51 100로 쌓여감.
					*/
					h[j] = h[i + 1];
					if (k <= 0) break;
				}
				if (k <= 0) break;
			}
		}
		if (k <= 0)
			cout << j << "\n";
		else
			cout << "-1\n";
	}

}
//#include<bits/stdc++.h>
//#define ll long long
//#define ull unsigned long long
//using namespace std;
//
//// 1과 범위 마지막 값등 간단한 경우에 대해 처리를 반드시 해주자.
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL), cout.tie(NULL);
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m;
//		cin >> n >> m;
//
//		vector<int>a(n);
//		for (auto& i : a)
//			cin >> i;
//		vector <int> b(n);
//		for (auto& i : b)
//			cin >> i;
//		vector <int> c(m);
//		for (auto& i : c)
//			cin >> i;
//		vector <int> ans(m);
//		multimap <int, int> mp;  // key  colour, value : index , 반드시 칠해야되는 색!
//		for (int i = 1; i < n + 1; i++)
//			if (a[i - 1] != b[i - 1])
//				mp.insert({ b[i - 1],i });
//		bool chk = false;
//		int tmp = -1;
//		for (int i = 0; i < m; i++)
//		{
//			if (!mp.empty())
//				if (mp.find(c[i]) != mp.end())
//				{
//					ans[i] = mp.find(c[i])->second, mp.erase(mp.find(c[i]));
//					tmp = ans[i];
//				}
//		}
//		if (!mp.empty())  // 못 칠해야 될 색을 못칠한 경우
//			cout << "NO" << '\n';
//		else   // 칠해야될 색을 다칠한 경우
//		{
//			if (tmp != -1)  // 남은거는 된거 중에서 아무대나 칠함.
//				chk = true;
//			if (chk)
//			{
//				cout << "YES" << '\n';
//				for (auto i : ans)
//					if (i != 0)
//						cout << i << ' ';
//					else
//						cout << tmp << ' ';
//				cout << '\n';
//			}
//			else
//				cout << "NO" << '\n';
//		}
//	}
//
//	return 0;
//}
