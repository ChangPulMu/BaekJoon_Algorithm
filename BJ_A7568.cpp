#include <iostream>
#include <utility>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	
	pair<int,int> p[n];
	
	for(int i=0; i<n; i++)
		cin >> p[i].first >> p[i].second;
	
	for(int i=0; i<n; i++)
	{
		int beyond = 0;
		
		for(int j=0; j<n; j++)
		{
			if(i == j) continue;
			if(p[i].first < p[j].first)
				if(p[i].second < p[j].second)
					beyond++;
		}
		
		cout << beyond + 1;
		
		if(i != n - 1)
			cout << " ";
	}
}

