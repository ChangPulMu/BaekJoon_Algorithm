#include <iostream>

using namespace std;

int main(void)
{
	int n, num = 0, count = 0, test;
	
	cin >> n;
	
	while(n != count)
	{
		num++;
		
		test = num;
		
		while((test / 10) != 0)
		{
			if(((test % 10) == 6) && (((test / 10) % 10) == 6) && (((test / 100) % 10) == 6)) 
			{
				count++;
				break;
			}
			
			test /= 10;
		}
	}
	
	cout << num;
	
	return 0;
}

