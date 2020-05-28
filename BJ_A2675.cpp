#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	int test;

	cin >> test;

	vector<string> v(test);

	for (int i = 0; i < test; i++)
	{
		int num; string s;

		cin >> num >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < num; k++)
				v[i].push_back(s[j]);
		}
	}

	for (int i = 0; i < test; i++)
		cout << v[i] << "\n";
}