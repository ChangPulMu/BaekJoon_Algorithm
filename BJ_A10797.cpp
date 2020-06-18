#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, count = 0;
	vector<int> a(5, -1);
	
	cin >> n;
	
	for(int i = 0; i < 5; i++)
		cin >> a[i];
	
	for(int i = 0; i < 5; i++)
		if(n == a[i]) count++;
	
	cout << count;
	
	return 0;
}
