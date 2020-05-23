#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = i; j < n; j++)
			cout << " ";
		for (int j = 2 * i - 1; j > 0; j--)
			cout << "*";
		cout << "\n";
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = i; n - j > 0; j++)
			cout << " ";
		for (int j = 2 * i - 1; j > 0; j--)
			cout << "*";
		cout << "\n";
	}
}