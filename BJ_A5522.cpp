#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0, tmp;

	for (int i = 0; i < 5; i++)
	{
		cin >> tmp;
		sum += tmp;
	}

	cout << sum;

	return 0;
}