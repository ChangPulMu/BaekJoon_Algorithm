#include <iostream>
#include <math.h>

using namespace std;

int main(void) // 계차수열을 이용한 등차수열 구한 후, 근의 공식으로 품
{
	double n;

	cin >> n;

	cout << ceil((3 + sqrt(3 * 3 - 12 + 12 * n)) / 6);
}