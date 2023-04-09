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
		int px, py;
		cin >> px >> py;
		string s;
		cin >> s;
		int size=s.length();
		int u=0, d=0, r=0, l=0;
		for(int i = 0; i < size;i++)
		{
			if (s[i] == 'U')
				u++;
			else if (s[i] == 'D')
				d++;
			else if (s[i] == 'R')
				r++;
			else if (s[i] == 'L')
				l++;
		}
		bool chk = false;
		if (- l <= px)
			if (px <= r)
				if (- d <= py)
					if (py <= u)
						chk = true;
		if (chk)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

	}

	return 0;
}