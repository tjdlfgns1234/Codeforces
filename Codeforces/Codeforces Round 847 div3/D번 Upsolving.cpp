#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
#define ull unsigned long long
#define mod 1000000007ll
#define all(a) a.begin(),a.end()

// beware of min & max value;
// 실수 연산은 정수연산보다 한참 느리다는 것을 기억하자
// 왠만하면 자료형은 적재적소에 맞추는게 기본!

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
        int n;
        cin >> n;
        int ans = 0;

        map<int, int> mp;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i],mp[arr[i]]++;
        }
        int start = -1;
        int p = 0;
        // 작은 거 부터 만들수 있는 세트를 가장 길게 만드는 게 핵심.
        for (auto& [f, s] : mp) {// f : 인형크기, s : 인형개수
            if (start != f - 1)p = 0; // 세트가 될 수 없을 때, p= 0임.
            if (s > p)ans += s - p; // 가장 긴 세트를 만드는데 만들 수 있는 세트보다 인형의 개수가 많을 경우 세트를 만듬
            start = f, p = s;
        }
        cout << ans << '\n';
    }

}