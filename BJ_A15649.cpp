#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v;
bool *isDone;

void backTracking();

int main(void)
{
	cin >> n >> m;

	isDone = new bool[n+1];

	for (int i = 0; i <= n; i++)
		isDone[i] = false;

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
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (!isDone[i])
			{
				v.push_back(i);
				isDone[i] = true;
				backTracking();
				v.pop_back();
				isDone[i] = false;
			}
		}
	}
}