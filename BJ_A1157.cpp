#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	string s;
	vector<int> v(26, 0);
	vector<int> temp;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 97)
			s[i] -= 32;

		v[s[i] - 65]++;
	}

	temp = v;

	sort(temp.begin(), temp.end());

	if (temp[temp.size() - 1] == temp[temp.size() - 2])
	{
		cout << '?';
		return 0;
	}
	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == temp[temp.size() - 1])
			{
				printf("%c", i + 65);
				return 0;
			}
		}
	}
}