#include <iostream>
#include <math.h>

using namespace std;

int main(void) // ���������� �̿��� �������� ���� ��, ���� �������� ǰ
{
	double n;

	cin >> n;

	cout << ceil((3 + sqrt(3 * 3 - 12 + 12 * n)) / 6);
}