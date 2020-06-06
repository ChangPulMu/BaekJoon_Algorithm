#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int, string>, pair<int, string>);

int main(void)
{
	int n;

	cin >> n;

	vector<pair<int, string>> v(n);

	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i].first; cin.ignore();
		getline(cin, v[i].second);
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}

bool compare(pair<int, string> a, pair<int, string> b)
{
	if (a.first == b.first) return false;
	return a.first < b.first;
}