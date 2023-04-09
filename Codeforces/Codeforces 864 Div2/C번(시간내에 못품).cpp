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

        int ans[3] = { 0 };
        string s;
        // 첫 질문
        s += "? ";
        s += to_string(0) + " ";
        s += to_string(0) + " ";

        cout.flush();
        cout << s;
        s.clear();

        cin >> ans[0];
        cout.flush();
        int q1 = n, q2 = m;
        if (ans[0] == 0)
            cout << "! " << n << " " << m;
        else { // 두번째 질문
            if (n - ans[0] >= 0) {
                q1 = n - ans[0];
                q2 = m;
            }
            else {
                q1 = 0;
                q2 = m + n - ans[0];
            }
            s += "? ";
            s += to_string(q1) + " ";
            s += to_string(q2) + " ";
        }

        cin >> ans[1];
        cout.flush();
        if (ans[1] == 0)
            cout << "! " << q1 << " " << q2;
        else {
           // 세번째 질문
          s += "? ";
          s += to_string(q1 ) + " ";
          s += to_string(q2) + " ";               
        }

        cin >> ans[2];
        
        if(ans[2] >= ans[1])
            cout << "! " << q1 << " " << q2 - ans[2]-ans[1];
        else
            cout << "! " << q1 << " " << q2 - ans[2] - ans[1];
}
