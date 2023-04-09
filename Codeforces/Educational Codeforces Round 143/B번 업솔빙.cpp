#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
#define ull unsigned long long
#define mod 1000000007ll
#define INF 100000007
#define SIZE 9
#define all(a) a.begin(),a.end()

// beware of min & max value;
// 빈 곳의 개수를 세는 것도 그래프를 잘 푸는 방법중 하나!
// /와 %연산은 배열을 나타낼때 유용하게 쓰인다.
// 우선순위 큐에 무엇을 넣을지도 잘 생각하자.

/* Educational Codeforces Round 143
  - 문제 이해를 잘 해야함.
  - Cover와 belong의 기본 의미를 잘 생각하자.
  - 브루트 포스를 꼭 먼저 생각하고 시간 복잡도를 계산 후
   가능하면 바로 구현에 들어가자.
*/


using namespace std;
void solve();

int main()
{
    ios::sync_with_stdio(NULL);
    std::cout.tie(NULL), cin.tie(NULL);

    solve();

    return 0;
}
void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector <pair<int, int>> arr(n);
        vector <int> dp(51);

        for (auto& i : arr)
            cin >> i.first >> i.second;

        bool f = false;
        int big = INF, small = 0;
        

        for (int i = 0; i < n; i++) {
            if (arr[i].first <= k && arr[i].second >= k) // k를 포함하는 구간
                for (int j = arr[i].first; j <= arr[i].second; j++)
                    dp[j]++;
        }

        int idx = 1, v = dp[1];
        for (int i = 1; i < 51; i++)
            if (v < dp[i])
                idx = i, v = dp[i];
            else if (v == dp[i])
                if (idx == k)
                    idx = i;

        if (idx == k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}