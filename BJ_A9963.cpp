#include <iostream>

using namespace std;

int n, c, sum;
bool *column;

void nQueen(int, int);

int main(void)
{
	c = 0; sum = 0;
	cin >> n;

	column = new bool[n+1];

	for (int i = 0; i <= n; i++)
		column[i] = false;

	nQueen(0, 0);

	cout << sum;

	return 0;
}

void nQueen(int diagonal_right, int diagonal_left)
{
	if (c == n) sum++;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if ((column[i] == false) && (diagonal_right != (diagonal_right | (1 << n - i)))
				&& (diagonal_left != (diagonal_left | (1 << n - i))))
			{
				column[i] = true;
				/*diagonal_right |= 1 << n - i;
				diagonal_left |= 1 << n - i;

				diagonal_right >>= 1;
				diagonal_left <<= 1;*/

				c++;
				/*cout << c << "´Ü°è : " << i << '\n';
				cout << "dr : " << ((diagonal_right | (1 << n - i)) >> 1) << '\n';
				cout << "dl : " << ((diagonal_left | (1 << n - i)) << 1) << '\n';*/
				nQueen((diagonal_right | (1 << n - i)) >> 1, (diagonal_left | (1 << n - i)) << 1);
				c--;

				column[i] = false;
				/*diagonal_right &= ~(1 << n - (i - 1));
				diagonal_left &= ~(1 << n - (i + 1));

				diagonal_right <<= 1;
				diagonal_left >>= 1;*/
			}
		}
	}
}