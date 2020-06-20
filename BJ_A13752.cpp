#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < v.size(); i++)
		cin >> v[i];

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i]; j++)
			cout << '=';
		cout << "\n";
	}

	return 0;
}