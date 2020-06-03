#include <iostream>
#include <vector>

using namespace std;
vector<int> v(10001, 0);

void Selfnum(int num)
{
	int tmp = num, index = num;

	while(true)
	{
		index += tmp % 10;
		tmp /= 10;

		if (tmp == 0)
			break;
	}

	if (index > 10000)
		return;
	else
	{
		v[index] = 1;
		Selfnum(index);
	}
}

int main(void)
{
	for (int i = 1; i <= 10000; i++)
	{
		if (v[i] == 0)
		{
			cout << i << "\n";
			Selfnum(i);
		}
	}
}