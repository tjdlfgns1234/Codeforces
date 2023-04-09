#include<iostream>
#include<Algorithm>
#include<map>


using namespace std;
map <int, int> mp;


int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int x;
    bool check;
    while (t--)
    {
        cin >> x;
        int input;
        check = false;
        for (int i = 0; i < x; i++)
        {
            cin >> input;
            if (mp.count(input) == 0)
                mp.insert({ input,i + 1 });
            else
                mp.find(input)->second = 0;
        }

        map <int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); ++it)
        {
            if (it->second != 0)
            {
                cout << it->second << "\n";
                check = true;
                break;
            }
        }
        if (!check)
            cout << -1 << "\n";
        mp.clear();
    }
    return 0;
}