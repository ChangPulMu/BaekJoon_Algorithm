#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int tmp, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> tmp;
		if (tmp < 40)
			sum += 40;
		else
			sum += tmp;
	}

	cout << sum / 5;
}