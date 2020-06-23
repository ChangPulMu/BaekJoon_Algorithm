#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k;

	cin >> n >> k;

	vector<pair<int, int>> v(n - 1);

	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i].second;
		v[i].first = k;
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = max(v[i].first, v[i].second); j > 0; j--)
			if ((v[i].first%j == 0) && (v[i].second%j == 0))
			{
				v[i].first /= j;
				v[i].second /= j;
			}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << '/' << v[i].second << '\n';

	return 0;
}