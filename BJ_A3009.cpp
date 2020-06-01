#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> vX(3), vY(3);

	for (int i = 0; i < 3; i++)
		cin >> vX[i] >> vY[i];

	sort(vX.begin(), vX.end()); sort(vY.begin(), vY.end());

	if (vX[0] == vX[1])
		cout << vX[2] << " ";
	else
		cout << vX[0] << " ";

	if (vY[0] == vY[1])
		cout << vY[2] << " ";
	else
		cout << vY[0] << " ";
}