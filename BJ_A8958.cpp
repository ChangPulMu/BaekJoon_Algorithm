#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	char string[80];
	int num, stnum = 0, conum = 0, sum = 0;
	bool combo = false;

	cin >> num;

	vector<int> v(num, 0);

	for (int i = 0; i < num; i++)
	{
		cin >> string;

		while (string[stnum] != '\0')
		{
			if (string[stnum] == 'O')
			{
				if (combo == true)
				{
					conum++;
					sum += conum;
				}
				else
				{
					sum++; conum++;
					combo = true;
				}
			}
			else if (string[stnum] == 'X')
			{
				combo = false;
				conum = 0;
			}
			
			stnum++;
		}

		v[i] = sum;
		sum = 0; stnum = 0; conum = 0;
	}

	for (int i = 0; i < num; i++)
		cout << v[i] << "\n";
}