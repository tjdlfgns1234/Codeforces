#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

void solve();

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
	return 0;
}
void solve()
{
    int A, B, k;
    cin >> A >> B >> k;
    vector <int> a(A+1), b(B+1);
    vector<pair<int, int>> edges(k);
    for (auto& i : edges)
        cin >> i.first;
    for (auto& i : edges)
        cin >> i.second;
    for (auto i : edges)
    {
        a[i.first]++;
        b[i.second]++;
    }
    ll ans = 0;
    for (auto i : edges)
        ans += k - a[i.first] - b[i.second]+1;

    cout << ans / 2 << '\n';
}