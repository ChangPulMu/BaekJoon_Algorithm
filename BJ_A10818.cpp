#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[0] << " " << v[v.size() - 1];
}