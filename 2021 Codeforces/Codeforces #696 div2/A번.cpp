#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string b;
		cin >> b;
		vector <int>ans;

		int pre = 0;
		if (b[0] == '0')
			ans.push_back(1),pre = 1;
		else if(b[0]=='1')
			ans.push_back(1),pre=2;

		for (int i = 1; i < n; i++)
		{
			if (b[i] == '0')
			{
				if (pre == 2)
					ans.push_back(1),pre=1;
				else if (pre == 1)
					ans.push_back(0),pre=0;
				else if (pre == 0)
					ans.push_back(1), pre = 1;
			}
			else if(b[i]=='1')
			{
				if (pre == 2)
					ans.push_back(0),pre = 1;
				else if (pre == 1)
					ans.push_back(1),pre = 2;
				else if (pre == 0)
					ans.push_back(1), pre = 2;
			}
		}
		for (int i = 0; i < n; i++)
			cout << ans[i];
		cout << '\n';
	}

	return 0;
}
