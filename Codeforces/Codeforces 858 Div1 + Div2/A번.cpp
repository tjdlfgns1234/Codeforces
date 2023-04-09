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
// 큐 쓰는 것도 좋았지만, 최적화는 잘해주자.
// 행렬을 배열로도 쓸 생각하자

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
        int a, b;
        cin >> a >> b;  // 둘다 0이 아님. + (0,0)에서 시작

        int small = min(abs(a), abs(b));
        int big = max(abs(a), abs(b));

        int diff = abs(big) - abs(small);


        if(diff == 0)
            cout << abs(big) + abs(small) << '\n';
        else if(diff == 1)
            cout << abs(big) + abs(small) << '\n';
        else
            cout << small*2 + (diff-1)+diff << '\n';   
    }

}