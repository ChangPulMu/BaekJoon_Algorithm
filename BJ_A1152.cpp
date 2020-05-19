#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	int count = 0;

	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			while (true)
			{
				i++;
				if (s[i] == ' ' || i >= s.length())
				{
					count++;
					break;
				}
			}
		}
	}

	cout << count;
}