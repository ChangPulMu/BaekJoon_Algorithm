#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v(10);
	int tmp;

	for (int i = 0; i < v.size(); i++)
	{
		cin >> tmp;
		v[i] = tmp % 42;
	}

	sort(v.begin(), v.end()); // Sort ���� Unique�� ����� ȿ���� ����

	v.erase(unique(v.begin(), v.end()), v.end()); // Unique ���� ��ȯ���� �ڿ� �����Ⱚ �������� �ε���

	cout << v.size();
}