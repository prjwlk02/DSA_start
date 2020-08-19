#include<iostream>

using std::cin;
using std::cout;

int fib_last_digit(int n)
	{
		int F[n];
		F[0]=0;
		F[1]=1;
		for(int i=2;i<=n;i++)
			F[i]=(F[i-1]+F[i-2])%10;     //directly last digit; no need of fib. no. calculation
		return F[n]; 
}
 
int main()
	{
	long long int n;
	cin>>n;
	int result=fib_last_digit(n);
	cout<<result<<"\n";
	}
