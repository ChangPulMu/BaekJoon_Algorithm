#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int a, b;
	vector<int> va, vb;
	bool vaWin = false;

	cin >> a >> b;

	while (true)
	{
		va.push_back(a % 10);
		vb.push_back(b % 10);

		a /= 10; b /= 10;

		if (a == 0 || b == 0)
			break;
	}

	for (int i = 0;; i++)
	{
		if (va[i] > vb[i])
		{
			vaWin = true;
			break;
		}
		else if (va[i] < vb[i])
		{
			vaWin = false;
			break;
		}
	}

	if (vaWin == true)
	{
		for (int i = 0; i < va.size(); i++)
			cout << va[i];
	}
	else
	{
		for (int i = 0; i < vb.size(); i++)
			cout << vb[i];
	}
}