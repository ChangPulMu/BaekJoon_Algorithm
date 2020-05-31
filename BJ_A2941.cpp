#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	int count = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case 'c':
			if (s[i + 1] == '=') i++;
			else if (s[i + 1] == '-') i++;
			count++; break;
		case 'd':
			if (s[i + 1] == 'z') { if (s[i + 2] == '=')i += 2; }
			else if (s[i + 1] == '-') i++;
			count++; break;
		case 'l':
			if (s[i + 1] == 'j') i++;
			count++; break;
		case 'n':
			if (s[i + 1] == 'j') i++;
			count++; break;
		case 's':
			if (s[i + 1] == '=') i++;
			count++; break;
		case 'z':
			if (s[i + 1] == '=') i++;
			count++; break;
		default:
			count++;
		}
	}

	cout << count;
}