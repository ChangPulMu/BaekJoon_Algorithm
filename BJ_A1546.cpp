#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int num;
	double tmp, sum = 0.0;

	cin >> num;

	vector<double> v;

	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < num; i++)
	{
		v[i] = v[i] / v[num - 1] * 100;
		sum += v[i];
	}

	cout << sum / (double)num;
}