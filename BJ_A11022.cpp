#include <iostream>
using namespace std;

int main(void)
{
	int test;

	cin >> test;

	int* a = new int[test];
	int* b = new int[test];

	for (int i = 0; i < test; i++)
	{
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < test; i++)
	{
		cout << "Case #" << i + 1 << ": " << a[i] << " + " << b[i] << " = " << a[i] + b[i] << "\n";
	}
}