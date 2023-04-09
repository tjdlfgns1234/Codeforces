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
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;
		string s;
		cin >> s;
		int one = 0, two = 0;
		for (auto i : s)
		{
			if (i == '0')
				one++;
			else if (i == '1')
				two++;
		}
		int ans = min(one * c0 + two * c1,one*c0+two*c0+ h*two );
		ans = min(ans, one * c1 + h*one + two * c1);
		ans = min(ans, min(c1,c0)*(one+two) + (one+two)*h);
		cout << ans << '\n';
	}

	return 0;
}