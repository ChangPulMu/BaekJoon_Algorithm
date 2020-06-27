#include <iostream>
#include <vector>
#include <cmath>
#define N 9

using namespace std;

int sdoku[N + 1][N + 1];
vector<pair<int, int>> v;

void backTracking(int);

int main(void)
{
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
		{
			cin >> sdoku[i][j];

			if (sdoku[i][j] == 0)
				v.push_back(make_pair(i, j));
		}

	backTracking(0);

	return 0;
}

void backTracking(int i)
{
	bool isUse[N + 1];
	int boxX, boxY;

	fill_n(isUse, N + 1, false);

	if (i == v.size())
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
				cout << sdoku[i][j] << ' ';
			cout << '\n';
		}

		exit(0);
	}
	else
	{
		for (int j = 1; j <= N; j++) // Row Check
			isUse[sdoku[v[i].first][j]] = true;

		for (int j = 1; j <= N; j++) // Column Check
			isUse[sdoku[j][v[i].second]] = true;

		boxX = (int)ceil(v[i].first / 3.0);
		boxY = (int)ceil(v[i].second / 3.0);

		//cout << boxX << ' ' << boxY << '\n';

		for (int j = (boxX * 3) - 2; j <= boxX * 3; j++) // Box Check
			for (int k = (boxY * 3) - 2; k <= boxY * 3; k++)
				isUse[sdoku[j][k]] = true;

		for(int j = 1; j <= N; j++)
			if (isUse[j] == false)
			{
				//cout << i << "´Ü°è backTrack! : " << j << '\n';
				sdoku[v[i].first][v[i].second] = j;
				backTracking(i + 1);
				sdoku[v[i].first][v[i].second] = 0;
			}
	}
}