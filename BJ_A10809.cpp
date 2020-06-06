#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<int> v(26, -1);
	string str;

	cin >> str;

	for (int i = 0; str[i] != NULL; i++)
	{
		if (v[str[i] - 97] != -1)
			continue;
		else
			v[str[i] - 97] = i;
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}