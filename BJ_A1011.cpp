#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
	int test;
	cin >> test;
	vector<int> v(test, 0);

	for (int i = 0; i < test; i++)
	{
		long long x, y, target, value, diff;
		cin >> x >> y;

		target = y - x;
		value = ceil((sqrt(1 + 4 * target) - 1) / 2);
		diff = ((value*value) + value) - target;

		if (diff < (value * 2) / 2)
			v[i] = value * 2;
		else
			v[i] = (value * 2) - 1;

	}

	for (int i = 0; i < test; i++)
		cout << v[i] << "\n";
}