#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	int count = 0;

	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == NULL) break;
		count++;
	}

	cout << count;

	return 0;
}