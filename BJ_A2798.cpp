#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m, best, ans = 0;
	
	cin >> n >> m;
	
	vector<int> v(n);
	
	for(int i=0;i<n;i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());
	
	for(int i=n-1;i>1;i--)
	{
		best = v[i];
		for(int j=i-1;j>0;j--)
		{
			if(best + v[j] <= m)
			{
				best += v[j];
				for(int z=j-1;z>=0;z--)
				{
					if(best + v[z] <=m && best + v[z] > ans)
						ans = best + v[z];
				}
				best = v[i];
			}
		}
	}
	
	cout << ans;
}

