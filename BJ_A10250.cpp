#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int test;
	cin >> test;
	vector<int> v(test);

	for (int i = 0; i < test; i++)
	{
		int h, w, n;
		cin >> h >> w >> n;

		if (n%h == 0)
			v[i] = h * 100 + (n / h);
		else
			v[i] = (n % h) * 100 + (n / h) + 1;
	}

	for (int i = 0; i < test; i++)
		cout << v[i] << "\n";
}