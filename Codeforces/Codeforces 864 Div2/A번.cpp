#include <bits/stdc++.h>
#include <unordered_map>
#define all(a) a.begin(),a.end()

// beware of min & max value;
// 빈 곳의 개수를 세는 것도 그래프를 잘 푸는 방법중 하나!
// /와 %연산은 배열을 나타낼때 유용하게 쓰인다.
// 우선순위 큐에 무엇을 넣을지도 잘 생각하자.
// 큐 쓰는 것도 좋았지만, 최적화는 잘해주자.
// 행렬을 배열로도 쓸 생각하자

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

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
        int n, m;
        cin >> n >> m;

        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = 4;
        if (x1 == 1 || x1 == n) {
            if (y1 == 1 || y1 == m)
                ans = 2;
            else
                ans = 3;
        }
        else {
            if (y1 == 1 || y1 == m)
                ans = 3;
            else
                ans = 4;
        }
        if (x2 == 1 || x2 == n) {
            if (y2 == 1 || y2 == m)
                ans = min(ans, 2);
            else
                ans = min(ans, 3);
        }
        else {
            if (y2 == 1 || y2 == m)
                ans = min(ans, 3);
            else
                ans = min(ans, 4);
        }

        cout << ans << '\n';

    }
}
