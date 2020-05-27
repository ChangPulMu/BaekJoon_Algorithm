#include <iostream>
#include <cmath>

#define N 4000

using namespace std;

int main(void)
{
	int n, tmp, c[(N * 2) + 1] = { 0 }, sum = 0;

	cin >> n;

	for (int i = 0; i<n; i++)
	{
		cin >> tmp;
		c[tmp + N]++;
		sum += tmp;
	}

	// 1 ans
	cout << round((double)sum / n) << "\n";

	// 2 ans
	int gather = 0;

	for (int i = 0;; i++)
	{
		gather += c[i];

		if (gather >= (n + 1) / 2)
		{
			cout << i - N << "\n";
			break;
		}
	}

	// 3 ans
	int max = 0, ans, bound = 0;
	int* m_count = new int[n+1];

	for (int i = 0; i<=n; i++)
		m_count[i] = 0;

	for (int i = 0; i <= N * 2; i++)
	{
		if (c[i] < bound)
			continue;
		if (c[i] >= max)
		{ 
			ans = i;
			max = c[i];
			m_count[c[i]]++;
		}
		if (m_count[c[i]] == 2)
			bound = c[i] + 1;
	}

	cout << ans - N << "\n";

	// 4 ans
	int start, end;

	for (int i = 0; i <= N * 2; i++)
	{
		if (c[i] > 0)
		{
			start = i - N;
			break;
		}
	}

	for (int i = N * 2; i >= 0; i--)
	{
		if (c[i] > 0)
		{
			end = i - N;
			break;
		}
	}

	cout << end - start;

	delete[] m_count;

	return 0;
}