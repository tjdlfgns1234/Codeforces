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

	cin >> t;

	while (t--) {
		cin >> n >> s;
		if (n == 5) {
			bool* c = new bool[5];

			for (int i =0; i < 5; i++)
				c[i] = false;

			for (auto i : s) {
				if (i == 'T')
					c[0] = true;
				if (i == 'i')
					c[1] = true;
				if (i == 'm')
					c[2] = true;
				if (i == 'u')
					c[3] = true;
				if (i == 'r')
					c[4] = true;
			}

			if (c[0] & c[1] & c[2] & c[3] & c[4])
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else {
			cout << "NO\n";
		}
	}


}