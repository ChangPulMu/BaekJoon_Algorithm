#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int l, c;
vector<char> v;
bool *isTrue;

void backTracking(int, int);
bool conditionTrue();

int main(void)
{
	char tmp;

	cin >> l >> c;

	isTrue = new bool[c];

	for (int i = 0; i < c; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
		isTrue[i] = false;
	}

	sort(v.begin(), v.end());

	backTracking(0, 0);

	return 0;
}

void backTracking(int num, int location)
{
	if (num == l && conditionTrue())
	{
		for (int i = 0; i < c; i++)
			if (isTrue[i])
				cout << v[i];
		cout << '\n';
	}
	else
	{
		for (int i = location; i < c; i++)
			if (!isTrue[i])
			{
				isTrue[i] = true;
				backTracking(num + 1, i + 1);
				isTrue[i] = false;
			}
	}
}

bool conditionTrue()
{
	bool collection = false;
	bool consonant = false;
	int cNum = 0;

	for (int i = 0; i < c; i++)
		if (isTrue[i])
		{
			if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
				collection = true;
			else
				cNum++;
		}

	if (cNum >= 2)
		consonant = true;

	if (collection && consonant)
		return true;
	else
		return false;
}