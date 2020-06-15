#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int  a, b, tmp;
	vector<int> vOne;
	vector<int> vTwo;

	while (cin >> a >> b)
	{
		vOne.push_back(a);
		vTwo.push_back(b);
	}

	for (int i = 0; i < vOne.size(); i++)
	{
		cout << vOne[i] + vTwo[i] << "\n";
	}
}