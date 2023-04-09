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
		int n, d;
		cin >> n >> d;
		vector<int> arr;
		bool chk = false;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		if (arr.size() != 1)
		{
			sort(arr.begin(), arr.end());

			if (arr[0] + arr[1] <= d)
				chk = true;
			else if (arr[arr.size() - 1] <= d)
				chk = true;	
		}
		else
			if (arr[0] <= d)
				chk = true;

		if (chk)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";

	}

	return 0;
}