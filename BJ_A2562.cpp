#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int tmp;
	vector<pair<int, int>> v(9);

	for (int i = 0; i < v.size(); i++)
	{
		cin >> tmp;
		v[i] = { tmp, i + 1 };
	}

	sort(v.begin(), v.end());

	cout << v[v.size() - 1].first << "\n" << v[v.size() - 1].second;
}