#include <iostream>

using namespace std;

int main(void)
{
	int m, n, min = 10000, sum = 0;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (j == 1)
			{
				if (i < min) min = i;
				sum += i;
			}
			if (i%j == 0) break;
		}
	}

	if (sum == 0) cout << -1;
	else cout << sum << "\n" << min;
}