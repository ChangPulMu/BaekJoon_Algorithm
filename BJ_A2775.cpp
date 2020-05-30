#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int test;
	cin >> test;
	vector<int> ans(test);

	for (int i = 0; i < test; i++)
	{
		int k, n, tmp = 1;
		cin >> k >> n;
		vector<int> v(n);

		for (int j = 0; j < n; j++)
			v[j] = tmp++;

		for (int j = 0; j < k; j++)
			for (int l = 1; l < n; l++)
				v[l] = v[l - 1] + v[l];

		ans[i] = v[n - 1];
	}

	for (int i = 0; i < test; i++)
		cout << ans[i] << "\n";
}