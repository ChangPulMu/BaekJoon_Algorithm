#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<int> v(11, 0);
	int tm = 0;

	for (int i = 2, j = 3; i < 27 || j < 11; i += 3, j++)
	{
		if (j == 8 || j == 10)
			i++;

		v[j] = i;
	}

	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 3; j < 11; j++)
		{
			if (v[j] >= (s[i] - 65))
			{
				tm += j;
				break;
			}
		}
	}

	cout << tm;
}