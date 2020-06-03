#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> vBurger;
	vector<int> vDrink;
	int high, middle, low, cola, cider;

	cin >> high >> middle >> low >> cola >> cider;
	vBurger.push_back(high); vBurger.push_back(middle); vBurger.push_back(low);
	vDrink.push_back(cola); vDrink.push_back(cider);

	sort(vBurger.begin(), vBurger.end());
	sort(vDrink.begin(), vDrink.end());

	cout << vBurger[0] + vDrink[0] - 50;
}