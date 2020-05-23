#include <iostream>

using namespace std;

int main(void)
{
	int n, tmp, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		
		for (int j = tmp - 1; j >= 1; j--)
		{
			if (j == 1) count++;
			if (tmp%j == 0) break;
		}
	}

	cout << count;
}