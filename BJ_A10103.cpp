#include <iostream>

using namespace std;

int main(void)
{
	int n = 100, m = 100, nt, mt, test;
	
	cin >> test;
	
	for(int i = 0; i < test; i++)
	{
		cin >> nt >> mt;
		
		if(nt > mt) m -= nt;
		else if(nt < mt) n -= mt;
	}
	
	cout << n << "\n" << m;
	
	return 0;
}
