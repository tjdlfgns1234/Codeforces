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
	string s;
	string name = "Timur";
	sort(all(name));

	cin >> t;

	while (t--) {
		cin >> n >> s;
		sort(all(s));
		cout << (s == name ? "YES" : "NO") << '\n';
	}
}