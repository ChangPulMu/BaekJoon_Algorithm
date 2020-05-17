#include <iostream>

using namespace std;

bool Hansu(int num)
{
	int a, b, c;

	if (num / 100 == 0)
		return true;
	else
	{
		a = num % 10;
		b = (num % 100) / 10;
		c = num / 100;

		if (c - b == b - a)
			return true;
		else
			return false;
	}
}

int main(void)
{
	int n, count = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (Hansu(i) == true)
			count++;
	}

	cout << count;
}