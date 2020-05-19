#include <iostream>
#include <math.h>

using namespace std;

int main(void) // 계차수열을 이용한 등차수열을 구한 후, 근을 구해서 답을 도출
{
	int n, d, diff;

	cin >> n; // 순서

	d = ceil(-0.5 + sqrt(0.25 + 2 * n));
	d--; // 순서에 따른 구역보다 한단계 아래

	diff = n - 0.5*d*(d + 1); // 구역에서의 순서를 구함

	d++; // 순서에 따른 구역을 다시 구함

	if (d % 2 == 0) // 짝수면 분자가 오름차순, 분모는 내림차순
		cout << diff << '/' << (d + 1) - diff;
	else // 홀수면 그 반대
		cout << (d + 1) - diff << '/' << diff;
}