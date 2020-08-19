#include<iostream>

using std::cin;
using std::cout;

long long int Fib_sum(int n)
{
		int F[n+2];
		F[0]=0;
		F[1]=1;
		for(int i=2;i<=n+2;i++)
			F[i]=(F[i-1]+F[i-2]);
		
		long long int F_sum=F[n+2]-1;
	return F_sum;
}

int main()
	{
	int n;
	cin>>n;
	long long int result=Fib_sum(n);
	cout<<result<<"\n";
	}
