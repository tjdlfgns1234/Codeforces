#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 32768
#define INF 1234567890
#define all(a) a.begin(),a.end()

// Beware of min & max Value;
// Always Think Edge & Coner case;
// 문제를 가장 작은 단위부터 쪼개서 생각하자.

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
        int n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (auto& i : arr)
            cin >> i;
        ll ans = 0;
        int idx = 0;
        sort(all(arr));
        ll sum = 0, day =0;
        for (int i = 0; i < n; i++)
            if (arr[i] > x) {
                idx = i - 1;
                break;
            }
            else
                idx = i, sum+=arr[i];
        while (1) {
            if (x <= day)
                break;
            if (arr[0] + day > x )
                break;

            if (sum + day * (idx+1) <= x )
                ans += idx + 1;
            else if (sum + day * (idx + 1) > x )
                for (int i = idx; i >= 0; i--)
                    if (sum + day * (idx + 1) <= x) {
                        idx = i, ans += idx + 1;
                        break;
                    }
                    else
                        sum -= arr[i], idx--;
            day++;
        }
        cout << ans << '\n';
    }
}
