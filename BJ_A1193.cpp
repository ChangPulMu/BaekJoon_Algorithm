#include <iostream>
#include <math.h>

using namespace std;

int main(void) // ���������� �̿��� ���������� ���� ��, ���� ���ؼ� ���� ����
{
	int n, d, diff;

	cin >> n; // ����

	d = ceil(-0.5 + sqrt(0.25 + 2 * n));
	d--; // ������ ���� �������� �Ѵܰ� �Ʒ�

	diff = n - 0.5*d*(d + 1); // ���������� ������ ����

	d++; // ������ ���� ������ �ٽ� ����

	if (d % 2 == 0) // ¦���� ���ڰ� ��������, �и�� ��������
		cout << diff << '/' << (d + 1) - diff;
	else // Ȧ���� �� �ݴ�
		cout << (d + 1) - diff << '/' << diff;
}