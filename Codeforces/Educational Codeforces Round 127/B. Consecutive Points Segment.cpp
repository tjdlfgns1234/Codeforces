#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 32768
#define INF 1234567890
#define all(a) a.begin(),a.end()

// Beware of min & max Value;
// Always Think Edge & Coner case;
// 문제를 가장 작은 단위부터 쪼개서 생각하자.

/* B. Consecutive Points Segment
* 3보다 큰 값의 gap은 매꿀수가 없음.
*
*  
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
        int n;
        cin >> n;
        vector <int> arr(n);
        bool* chk = new bool[n];
        for (auto& i : arr)
            cin >> i;
        for (int i = 0; i < n; i++)
            chk[i] = false;

        bool flag = false;
        if (n != 1) {
            // 차가 3 , 4이상 확인
            for (int i = 0; i < n - 1; i++)
                if (arr[i + 1] - arr[i] >= 4) {
                    // 못만듬
                    flag = true;
                    break;
                }
                else if (arr[i + 1] - arr[i] == 3) {
                    if (chk[i] == false && chk[i + 1] == false) {
                        // 작은 수 올리고 큰수 낮춰야됨
                        arr[i + 1]--, arr[i]++;
                        chk[i] = true, chk[i + 1] = true;

                        for (int j = 0; j < i; j++) {
                            // 작은수 올릴 수 있는지 확인
                            if (!chk[j]) {
                                chk[j] = true, arr[j]++;
                            }
                            else {
                                // 못올리면 OUT
                                flag = true;
                                break;
                            }
                        }


                    }
                    else {
                        flag = true;
                        break;
                    }
                }
                else if (arr[i + 1] - arr[i] == 2) {
                    if (chk[i + 1] == false) {
                        if (chk[i] == false) {
                            bool chk2 = false;;
                            for (int j = 0; j <= i; j++) {
                                // 작은수 올릴 수 있는지
                                if (chk[j]) {
                                    chk2 = true;
                                    break;
                                }
                            }
                            if(!chk2)
                                for (int j = 0; j <= i; j++) {
                                    // 올릴 수 있으면 올려
                                    if (!chk[j]) {
                                        chk[j] = true, arr[j]++;
                                    }
                                }
                            else
                                arr[i + 1]--, chk[i + 1] = true;
                        }else
                            arr[i + 1]--, chk[i + 1] = true;
                    }
                    else
                        for (int j = 0; j <= i; j++) {
                            // 큰수를 못바꾸면 작은 수를 다 올려야됨
                            if (!chk[j])
                                chk[j] = true, arr[j]++;
                            else
                            {
                                // 하나라도 못바꾸면 빠구
                                flag = true;
                                break;
                            }
                        }
                }
                else
                    continue;
        }
        else
            flag = false;

        if (!flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
   
}
