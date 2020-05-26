#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	int n;
	vector<int> v;

	cin >> n;

	while (n > 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++)
		cout << v[i];

	return 0;
}