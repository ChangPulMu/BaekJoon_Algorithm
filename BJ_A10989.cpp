#include <cstdio>

#define N 10000

/*int main(void)
{
	int n; cin >> n;
	
	int a[n], b[n+1], c[10001] = {0};
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		c[a[i]]++;
	}
	
	for(int i=0; i<10000; i++)
		c[i+1] += c[i];
	
	for(int i=n-1; i>=0; i--)
	{
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}
	
	for(int i=1; i<=n; i++)
		cout << b[i] << "\n";
	
	return 0;
}*/

int main(void)
{
	int n, tmp; scanf("%d", &n);
	int c[N+1] ={0};
	
	for(int i=0; i<n; i++)
	{
		scanf("%d", &tmp);
		c[tmp]++;
	}
	
	for(int i=0, j=0; i<n;)
	{
		if(c[j] == 0)
			j++;
		else
		{
			printf("%d\n", j);
			c[j]--; i++;
		}
	}
	
	return 0;
}
