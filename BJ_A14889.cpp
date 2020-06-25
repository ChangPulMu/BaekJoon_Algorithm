#include <iostream>
#include <vector>

using namespace std;

int n, diff;
vector<int> *vAbility;
bool *isStart;

void backTracking(int, int);

int main(void)
{
	diff = ~(1 << 31);

	int tmp;

	cin >> n;

	isStart = new bool[n + 1];

	for (int i = 1; i <= n; i++)
		isStart[i] = false;

	vAbility = new vector<int>[n + 1];

	for (int i = 1; i <= n; i++) // �ε��� ������ 1���� �ϱ� ����
		vAbility[i].push_back(0);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> tmp;
			vAbility[i].push_back(tmp);
		}

	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++)
			vAbility[i][j] += vAbility[j][i];

	/*cout << '\n';
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << vAbility[i][j] << ' ';
		cout << '\n';
	}*/

	backTracking(0, 0);

	cout << diff;

	return 0;
}

void backTracking(int c, int ind)
{
	if (c == n / 2)
	{
		int startSum = 0, linkSum = 0, min_value;
		vector<int> vStart;
		vector<int> vLink;

		for (int i = n; i >= 1; i--) // Start��, Link�� ��ġ
		{
			if (isStart[i] == true) vStart.push_back(i);
			else vLink.push_back(i);
		}

		/*for (int i = 0; i < vLink.size(); i++)
		{
			cout << vStart[i] << ' ' << vLink[i] << '\n';
		}*/

		while (vStart.size()) // Start�� �ɷ�ġ ��
		{
			//cout << "vStart ������ �� : " << *(vStart.end() - 1) << '\n';

			for (int i = 0; i < vStart.size() - 1; i++)
				startSum += vAbility[*(vStart.end() - 1)][vStart[i]];
			vStart.pop_back();
		}

		while (vLink.size()) // Link�� �ɷ�ġ ��
		{
			//cout << "vLink ������ �� : " << *(vLink.end() - 1) << '\n';

			for (int i = 0; i < vLink.size() - 1; i++)
				linkSum += vAbility[*(vLink.end() - 1)][vLink[i]];
			vLink.pop_back();
		}

		if (startSum > linkSum) min_value = startSum - linkSum; // ���̰� ���
		else min_value = linkSum - startSum;

		if (min_value < diff) diff = min_value;
	}
	else
	{
		for (int i = ind + 1; i <= n; i++)
		{
			if (isStart[i] == false)
			{
				isStart[i] = true;
				//cout << "isStart �� : " << i << ' ' << isStart[i] << '\n';
				backTracking(c + 1, i);
				isStart[i] = false;
			}
		}
	}
}