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
  - bruteforce로 풀리는 문제
  - 대회떄는 시간 압박과 WA의 부담감 떄문에 간단한 문제입에도
   구현할 생각을 못했음.
  - 시간 복잡도도 계산을 잘했으나 string 구현이 잘 안되서 못품
  - 최적화를 시킬 수 있는 문제
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

        bool f = false; // flag

        for (int j = 0; j < 2; j++) {
            string na = a, nb = b;
            for (int i = 0; i < n; i++) {
                if (chk(na) && chk(nb)) {
                    f = true;
                }
                nb.push_back(na.back());
                na.pop_back();
            }
            swap(n, m);
            swap(a, b);
        }
        cout << (f ? "YES\n" : "NO\n");
    }
}
bool chk(string a) {
    for (int i = 1; i < (int)a.size(); i++)
        if (a[i - 1] == a[i]) return false;
    return true;
}