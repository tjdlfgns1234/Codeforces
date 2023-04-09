#include<iostream>
#include<Algorithm>
#define SIZE 100
using namespace std;
bool visit[SIZE + 1] = { false };

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int t;
    cin >> t;
    int x;
    while (t--)
    {
        cin >> x;

        for (int i = 1; i < x + 1; i++)
            visit[i] = false;

        for (int i = 1; i < x + 1; i++)
            for (int j = 1; j < x + 1; j++)
                if (!visit[j] && j!=i)
                    cout << j << " ",visit[j] = true;
        cout << "\n";
    }
    return 0;
}