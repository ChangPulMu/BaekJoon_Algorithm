#include <iostream>

using namespace std;

int main(void)
{
	int n, student, apple, remain = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> student >> apple;
		remain += apple % student;
	}

	cout << remain;

	return 0;
}