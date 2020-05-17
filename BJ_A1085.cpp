#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int x, y, w, h, min, len, height;
	cin >> x >> y >> w >> h;
	len = w - x;
	height = h - y;

	min = len;
	if (height < min) min = height;
	if (x < min) min = x;
	if (y < min) min = y;

	cout << min;
}