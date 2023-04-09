#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 32768
#define INF 1234567890
#define all(a) a.begin(),a.end()

// Beware of min & max Value;
// Always Think Edge & Coner case;
// 문제를 가장 작은 단위부터 쪼개서 생각하자.

/* A번 최적화 풀이
* ab 혹은 aba, bab, ba만 있는지를 확인 해준 풀이
*/
using namespace std;

void solve();

int main()
{
    ios::sync_with_stdio(NULL);
    cout.tie(NULL), cin.tie(NULL);

    solve();

    return 0;
}
void solve() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool ans = false;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if ((i == 0 || s[i] != s[i - 1]) && (i == n - 1 || s[i] != s[i + 1]))
                ans = true;
        }
        cout << (ans ? "NO\n" : "YES\n");
    }
}
