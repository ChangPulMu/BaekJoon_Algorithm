#include <iostream>
#include <vector>
#include <string>

using namespace std;

int r, c;
string *alphabet;
vector<char> v;
bool isTrue[26];
int maxValue;

void backTracking(int, int);

int main(void)
{
	cin >> r >> c;
	cin.ignore();

	alphabet = new string[r];

	for (int i = 0; i < r; i++)
		getline(cin, alphabet[i]);

	for (int i = 0; i < 26; i++)
		isTrue[i] = false;

	backTracking(0, 0);

	cout << maxValue;

	return 0;
}

void backTracking(int row, int column)
{
	int value;

	v.push_back(alphabet[row][column]);
	isTrue[alphabet[row][column] - 65] = true;
	value = v.size();

	/*for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << '\n';*/

	if (maxValue < value)
		maxValue = value;

	if (row - 1 >= 0 && !isTrue[alphabet[row - 1][column] - 65])
	{
		backTracking(row - 1, column);
		v.pop_back();
		isTrue[alphabet[row - 1][column] - 65] = false;
	}

	if (column - 1 >= 0 && !isTrue[alphabet[row][column - 1] - 65])
	{
		backTracking(row, column - 1);
		v.pop_back();
		isTrue[alphabet[row][column - 1] - 65] = false;
	}

	if (row + 1 < r && !isTrue[alphabet[row + 1][column] - 65])
	{
		backTracking(row + 1, column);
		v.pop_back();
		isTrue[alphabet[row + 1][column] - 65] = false;
	}

	if (column + 1 < c && !isTrue[alphabet[row][column + 1] - 65])
	{
		backTracking(row, column + 1);
		v.pop_back();
		isTrue[alphabet[row][column + 1] - 65] = false;
	}
}