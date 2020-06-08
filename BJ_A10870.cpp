#include <iostream>
using namespace std;

int Fibo(int);

int main(void)
{
	int n;
	cin >> n;
	
	cout << Fibo(n);
}

int Fibo(int num)
{
	if(num < 2)
		return num;
	else
		return Fibo(num-1) + Fibo(num-2);
}
