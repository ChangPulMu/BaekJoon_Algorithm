#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	int n, groupWord = 0;
	
	cin >> n;

	vector<bool> count(n, true);

	for (int i = 0; i < n; i++)
	{
		string s;
		vector<bool> vAp(26, false);

		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			if (vAp[s[j] - 97] == false)
			{
				vAp[s[j] - 97] = true;
				while (true)
				{
					if (s[j] - 97 != s[j + 1] - 97) break;
					j++;
				}
			}
			else
				count[i] = false;
		}
	}

	for (int i = 0; i < count.size(); i++)
		if (count[i] == true) groupWord++;

	cout << groupWord;
}