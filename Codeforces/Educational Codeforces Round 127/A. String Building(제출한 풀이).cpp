#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 32768
#define INF 1234567890
#define all(a) a.begin(),a.end()

// Beware of min & max Value;
// Always Think Edge & Coner case;
// 문제를 가장 작은 단위부터 쪼개서 생각하자.

/* A. String Building
* a 와 b를 각각 2개 3개 씩 붙일 수 있기 때문에
* a와 b가 단독으로 있는 경우를 제외하곤 전부 가능하다.
* 따라서 단독으로 있는 경우만 찾으면 된다.
* O(n)으로 풀린다.


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

        char pre = NULL;
        int co = 0;
        bool chk = false;
        if (s.length() != 1) {
            for (int i = 0; i < s.length(); i++) {
                if (pre == NULL)
                    pre = s[i], co++;
                else if (pre != s[i]) {
                    if (co == 1) {
                        chk = true;
                        break;
                    }
                    else
                        co = 1, pre = s[i];
                }
                else if (pre == s[i])
                    co++, pre = s[i];
            }
            if (co == 1)
                chk = true;
        }
        else
            chk = true;
        if (!chk)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
