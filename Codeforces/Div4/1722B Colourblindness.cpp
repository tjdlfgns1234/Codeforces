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
	string s1, s2;
	cin >> t;

	while (t--) {
		cin >> n;
		cin >> s1 >> s2;

		for (int i = 0; i < n; i++) {
			if (s1[i] == 'G')
				s1[i] = 'B';
			if (s2[i] == 'G')
				s2[i] = 'B';
		}
		cout << ((s1 == s2) ? "YES" : "NO") << "\n";
	}
}