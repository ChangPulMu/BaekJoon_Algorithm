#include <iostream>
using namespace std;

int main(void)
{
	int one, two, a, b, c;

	cin >> one >> two;

	a = two % 10;
	b = (two % 100) / 10;
	c = two / 100;

	cout << one * a << "\n" << one * b << "\n" << one * c << "\n" << one * two;
}