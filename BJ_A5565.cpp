#include <iostream>

using namespace std;

int main(void)
{
	int n, tmp;
	
	cin >> n;
	
	for(int i = 0; i < 9; i++)
	{
		cin >> tmp;
		n -= tmp;
	}
	
	cout << n;
	
	return 0;
}
