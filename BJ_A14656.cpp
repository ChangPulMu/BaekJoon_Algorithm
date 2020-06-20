#include <iostream>

using namespace std;

int main(void)
{
	int n, count = 1, tmp, hit = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;

		if (tmp != count)
			hit++;

		count++;
	}

	cout << hit;

	return 0;
}