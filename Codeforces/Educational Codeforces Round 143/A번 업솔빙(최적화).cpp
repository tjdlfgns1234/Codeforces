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

/* Educational Codeforces Round 143 (Rated for Div. 2)
  - 일단 다 옮겨 버리고 그중에서 한번 이하로 바꾸는 경우는 다 OK
*/



using namespace std;
bool chk(string a);
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

        string a, b;
        cin >> a >> b;
        reverse(all(b));

        a = a + b;
        int cnt = 0;

        for (int i = 1; i < n + m; i++)
            cnt += (a[i - 1] == a[i]);
       
        cout << (cnt <=1? "YES\n" : "NO\n");
    }
}
bool chk(string a) {
    for (int i = 1; i < (int)a.size(); i++)
        if (a[i - 1] == a[i]) return false;
    return true;
}