#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, count = 0, max;

	cin >> n;

	for (int i = n; i > 0; i /= 10)
	{
		count++;

		if (i < 10)
			max = i;
	}

	for (int i = n - (((count - 1) * 9) + max); i < n; i++)
	{
		int ans = i;
		vector<int> v(count);

		for (int j = i, tmp = 0; j > 0; j /= 10, tmp++)
			v[tmp] = j % 10;

		for (int j = 0; j < v.size(); j++)
			ans += v[j];


		if (ans == n)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;
}