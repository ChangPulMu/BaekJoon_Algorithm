#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0, max = 0, tmp;

	for (int i = 0; i < 4; i++)
	{
		cin >> tmp; sum -= tmp;
		cin >> tmp; sum += tmp;

		if (sum > max) max = sum;
	}

	cout << max;

	return 0;
}