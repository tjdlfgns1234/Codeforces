#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 32768
#define INF 1234567890
#define all(a) a.begin(),a.end()

// Beware of min & max Value;
// Always Think Edge & Coner case;

using namespace std;

/*  Edu 126  B. Getting Zero
    대회 중에 2^15 =32768이라는 사실을 눈치 채지 못하면 끝

    32768 = 2^15이므로 어떠한 값이라도 15번 곱하면 만들 수 있다.
    간단한 백트래킹 전수 탐색은 시간초과(위 사실을 이용해도)
    저 사실을 사용하여 포문 2개를 사용하여 풀면된다.
    << 가 2배를 곱하는 연산자라는 것을 잊지 말것


    tag : bitmasks, brute force, dfs and similar    
    dp, graphs, greedy, shortest paths, *1300
*/

void solve();

int main()
{
    ios::sync_with_stdio(NULL);
    cout.tie(NULL), cin.tie(NULL);

    solve();

    return 0;
}
void solve() {
    int n;
    cin >> n;

    vector <int> arr(n);
    for (auto& i : arr)
        cin >> i;

    for (auto i : arr) {
        int ans = 20;
        for (int add = 0; add < 15 + 1; add++)
            for (int mul = 0; mul < 15 + 1; mul++)
                if ((((i + add) ) << mul) % mod == 0) // 2를 곱하기 위한 shift 연산자
                    ans = min(ans, add + mul);
        cout << ans << " ";
    }
}
