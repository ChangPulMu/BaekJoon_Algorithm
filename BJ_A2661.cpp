#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int n;

void backTracking(int);
bool isOk();

int main(void)
{
	cin >> n;

	backTracking(0);
}

void backTracking(int num)
{
	if (num == n)
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i];
		cout << '\n';

		exit(0);
	}
	else
	{
		for (int i = 1; i <= 3; i++)
		{
			v.push_back(i);

			if (isOk())
			{
				//cout << "True : " << num + 1 << " & value : " << i << '\n';
				backTracking(num + 1);
			}

			v.pop_back();
		}
	}
}

bool isOk()
{
	int tmp = 0;

	for (int i = 1; i <= v.size() / 2; i++)					// 수열의 등차
		for (int j = 0; j <= v.size() - (i * 2); j++)			// 인접부분 수열 비교
		{
			for (int k = 0, l = j, m = j + i; k < i; k++, l++, m++)
				if (v[l] == v[m])
					tmp++;

			if (tmp == i)
				return false;

			tmp = 0;
		}

	return true;
}