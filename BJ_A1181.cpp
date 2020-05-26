#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string, string);

int main(void)
{
	int n;

	cin >> n;
	cin.ignore();

	vector<string> v(n);

	for (int i = 0; i < n; i++)
		getline(cin, v[i]);

	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	return 0;
}

bool compare(string a, string b)
{
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}