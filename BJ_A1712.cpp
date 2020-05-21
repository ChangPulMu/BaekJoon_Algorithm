#include <iostream>

using namespace std;

int main(void)
{
	long long a, b, c, sell = 0;

	cin >> a >> b >> c;

	if (b >= c)
	{
		cout << -1;
		return 0;
	}

	sell = a / (c - b) + 1;

	cout << sell;
}