#include <iostream>
using namespace std;

int main(void)
{
	int test, a, b;

	cin >> test;

	int* array = new int[test];

	for (int i = 0; i < test; i++)
	{
		cin >> a >> b;
		array[i] = a + b;
	}

	for (int i = 0; i < test; i++)
	{
		cout << "Case #" << i+1 << ": " << array[i] << "\n";
	}
}