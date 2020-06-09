#include <iostream>
using namespace std;

int main(void)
{
	int value, answer = 1;
	cin >> value;
	
	for(int i=2;i<=value;i++)
		answer *= i;
	
	cout << answer;
}
