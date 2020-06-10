#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int  a = 1, b = 1;
	vector<int> vOne;
	vector<int> vTwo;

	while (a != 0 || b != 0)
	{
		cin >> a >> b;
		vOne.push_back(a);
		vTwo.push_back(b);
	}

	for (int i = 0; i < vOne.size() - 1; i++)
	{
		cout << vOne[i] + vTwo[i] << "\n";
	}
}