#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i < n+1; i++)
            cout << i << " ";
        cout << 1 << "\n";
    }
   
    return 0;
}