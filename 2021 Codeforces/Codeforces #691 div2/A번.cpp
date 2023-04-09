#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a, b;
	int t;
	cin >> t;
	int n;
	int r = 0 , l = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		r = 0, l = 0;
		cin >> a >> b;
		for (int j = 0; j < n; j++)
		{
			if (a[j] > b[j])
				r++;
			else if (a[j] < b[j])
				l++;
		}
		if (r == l)
			cout << "EQUAL" << "\n";
		else if (r > l)
			cout << "RED" << "\n";
		else
			cout << "BLUE" << "\n";


	}

	return 0;
}