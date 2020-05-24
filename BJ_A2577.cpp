#include <iostream>

using namespace std;

#define N 10

int main(void)
{
	int a, b, c, result, index;
	int count[N] = { 0 };

	cin >> a >> b >> c;

	result = a * b * c;

	while (result != 0)
	{
		index = result % 10;
		count[index]++;

		result /= 10;
	}

	for (int i = 0; i < N; i++)
	{
		cout << count[i] << "\n";
	}
}