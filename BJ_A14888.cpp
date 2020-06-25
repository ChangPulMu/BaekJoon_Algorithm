#include <iostream>
#include <vector>

#define MAX_V 1000000000
#define MIN_V -1000000000

using namespace std;

int num, operation[5], max_value, min_value, maxOperation = 0;
vector<int> v;

void backTracking(int, int);

int main(void)
{
	int tmp;
	max_value = MIN_V, min_value = MAX_V;

	cin >> num;

	v.push_back(0); // 인덱스 시작을 1부터 하기 위해
	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int i = 1; i <= 4; i++)
	{
		cin >> operation[i];
		maxOperation += operation[i];
	}

	backTracking(1, v[1]);

	cout << max_value << '\n' << min_value << '\n';

	return 0;
}

void backTracking(int n, int result)
{
	if (n == num)
	{
		//cout << n << "단계 result : " << result << '\n';
		if (result > max_value) max_value = result;
		if (result < min_value) min_value = result;
	}
	else
	{
		for (int i = 1; i <= 4; i++)
		{
			if (operation[i] > 0)
			{
				switch (i)
				{
					case 1:
						operation[i]--;
						backTracking(n + 1, result + v[n + 1]);
						operation[i]++;
						//cout << "Catch in 1" << '\n';
						break;
					case 2:
						operation[i]--;
						backTracking(n + 1, result - v[n + 1]);
						operation[i]++;
						//cout << "Catch in 2" << '\n';
						break;
					case 3:
						operation[i]--;
						backTracking(n + 1, result * v[n + 1]);
						operation[i]++;
						//cout << "Catch in 3" << '\n';
						break;
					case 4:
						operation[i]--;
						backTracking(n + 1, result / v[n + 1]);
						operation[i]++;
						//cout << "Catch in 4" << '\n';
						break;
				}
			}
		}
	}
}