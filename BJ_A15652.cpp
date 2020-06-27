#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

void backTracking(int);

int main(void)
{
	cin >> n >> m;

	backTracking(1);
}

void backTracking(int num)
{
	if (v.size() == m)
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
		cout << '\n';
	}
	else
	{
		for (int i = num; i <= n; i++)
		{
			v.push_back(i);
			backTracking(i);
			v.pop_back();
		}
	}
}