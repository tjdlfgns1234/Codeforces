#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define maxVal 100000
using namespace std;

void solve();

int main(void)
{
	ios::sync_with_stdio(NULL);
	::cout.tie(NULL), cin.tie(NULL);

	solve();

	return 0;
}
void solve() {
	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;
		int a = 0, b = 0, c = 0;
		vector <string> s1, s2, s3;
		map <string, int> mp;
		string tmp;

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			s1.push_back(tmp);
			if (mp.count(tmp) == 0)
				mp.insert({ tmp, 1 });
			else
				mp.find(tmp)->second++;
		}

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			s2.push_back(tmp);
			if (mp.count(tmp) == 0)
				mp.insert({ tmp, 1 });
			else
				mp.find(tmp)->second++;
		}

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			s3.push_back(tmp);
			if (mp.count(tmp) == 0)
				mp.insert({ tmp, 1 });
			else
				mp.find(tmp)->second++;
		}

		for (int i = 0; i < n; i++) {
			int f = mp.find(s1[i])->second;
			if (f == 1)
				a += 3;
			else if (f == 2)
				a += 1;
			else
				continue;
		}

		for (int i = 0; i < n; i++) {
			int f = mp.find(s2[i])->second;
			if (f == 1)
				b += 3;
			else if (f == 2)
				b += 1;
			else
				continue;
		}

		for (int i = 0; i < n; i++) {
			int f = mp.find(s3[i])->second;
			if (f == 1)
				c += 3;
			else if (f == 2)
				c += 1;
			else
				continue;
		}

		
		cout << a << " " << b << " " << c << "\n";
	}
}