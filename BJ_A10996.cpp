#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > 0; j -= 2)
			cout << "* ";
		cout << "\n ";
		for (int j = n - 1; j > 0; j -= 2)
			cout << "* ";
		cout << "\n";
	}
}