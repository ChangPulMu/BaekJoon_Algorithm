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

	sort(v.begin(), v.end()); // Sort 이후 Unique를 해줘야 효과가 있음

	v.erase(unique(v.begin(), v.end()), v.end()); // Unique 이후 반환값은 뒤에 쓰레기값 시작점의 인덱스

	cout << v.size();
}