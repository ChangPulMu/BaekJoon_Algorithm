#include <iostream>

#define NUM 64

using namespace std;

int main(void)
{
	int n = NUM, x, count = 1, min;

	cin >> x;

	while (n > x)
		n /= 2;

	min = n;

	while (n != x)
	{
		min /= 2;

		if (n + min < x)
		{
			n += min;
			count++;
		}
		else if (n + min == x)
		{
			count++;
			break;
		}
	}

	cout << count;

	return 0;
}