#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
	int test, tmp;
	vector<double> avg;

	cin >> test;

	for (int i = 0; i < test; i++)
	{
		int num = 0, sum = 0, index = 0;
		double avr = 0.0;

		cin >> num;

		vector<int> v(num);

		for (int j = 0; j < num; j++)
		{
			cin >> tmp;
			v[j] = tmp;
			sum += v[j];
		}

		sort(v.begin(), v.end());

		avr = (double)sum / num;

		while (true)
		{
			if (index == num)
				break;

			if (avr < v[index])
				break;

			index++;
		}

		if (index == num)
		{
			avg.push_back(0.0);
			continue;
		}

		avg.push_back(((double)(num - index) / num) * 100);
	}

	for (int i = 0; i < test; i++)
	{
		printf("%.3f%%\n", round(avg[i] * 1000) / 1000); // round로 소수점 3자리에서 반올림
	}
}