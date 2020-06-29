#include <iostream>
#include <vector>

#define N 6

using namespace std;

int k;
vector<int> vS;
bool *isTrue;

void backTracking(int, int);

int main(void)
{
	int tmp;

	while (true)
	{
		cin >> k;

		if (k == 0) break;

		isTrue = new bool[k];

		for (int i = 0; i < k; i++)
			isTrue[i] = false;

		for (int i = 0; i < k; i++)
		{
			cin >> tmp;
			vS.push_back(tmp);
		}

		backTracking(0, 0);

		for (int i = 0; i < k; i++)
			vS.pop_back();

		cout << '\n';
	}

	delete[] isTrue;

	return 0;
}

void backTracking(int c, int location)
{
	if (c == N)
	{
		for (int i = 0; i < k; i++)
			if (isTrue[i] == true)
				cout << vS[i] << ' ';
		cout << '\n';
	}
	else
	{
		for (int i = location; i < k; i++)
			if (isTrue[i] == false)
			{
				isTrue[i] = true;
				backTracking(c + 1, i + 1);
				isTrue[i] = false;
			}
	}
}