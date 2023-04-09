#include <bits/stdc++.h>

using namespace std;

struct p {
	int w, h;
};
struct rep {
	int w, h;
};

int main(void)
{
	ios::sync_with_stdio(NULL);
	cout.tie(NULL), cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector <p> ori;
		for (int i =0; i < n; i++)
		{
			struct p tmp;
			cin >> tmp.h >> tmp.w;
			ori.push_back(tmp);
		}
		for (int i = 0; i < n; i++)
		{
			bool chk = false;
			for (int j = 0; j < n; j++)
			{
				if (i != j)
				{
					if (ori[j].h < ori[i].h && ori[j].w < ori[i].w)
					{
						cout << j + 1 << ' ', chk = true;;
						break;
					}
					else if (ori[j].w < ori[i].h && ori[j].h < ori[i].w)
					{
						cout << j + 1 << ' ', chk = true;;
						break;
					}
				
				}
				
			}
			if (!chk)
			{
				cout << -1 << ' ';
			}
		}
		cout << '\n';
		ori.clear();
	}

	return 0;
}