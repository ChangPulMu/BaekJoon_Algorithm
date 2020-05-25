#include <iostream>

#define INF 2500

using namespace std;

int main(void)
{
	int n, m, best = INF;
	
	cin >> n >> m;
	
	char c[n][m];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> c[i][j];
	
	for(int i=0;i<=n-8;i++)
		for(int j=0;j<=m-8;j++)
		{
			int test = 0;
			
			for(int k=i;k<i+8;k++)
				for(int l=j;l<j+8;l+=2)
				{
					if(k%2 == 1)
					{
						if(c[k][l] == 'B') test++;
						if(c[k][l+1] == 'W') test++;
					}
					else
					{
						if(c[k][l] == 'W') test++;
						if(c[k][l+1] == 'B') test++;
					}
				}
				
			if(test < best) best = test;
				
			test = 0;
			
			for(int k=i;k<i+8;k++)
				for(int l=j;l<j+8;l+=2)
				{
					if(k%2 == 1)
					{
						if(c[k][l] == 'W') test++;
						if(c[k][l+1] == 'B') test++;
					}
					else
					{
						if(c[k][l] == 'B') test++;
						if(c[k][l+1] == 'W') test++;
					}
				}
				
			if(test < best) best = test;
		}
	
	cout << best;
		
	return 0;
}

