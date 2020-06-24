#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

void backTracking();

int main(void)
{
	cin >> n >> m;

	backTracking();
}

void backTracking()
{
	if (v.size() == m)
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
		cout << "\n";
	}

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
		backTracking(i+1);
		v.pop_back();
	}
}