#include<iostream>

using std::cin;
using std::cout;

int fib_last_digit(int n,int m)
	{	
		int new_n=(n+2)%60;
		int new_m=(m+1)%60;
		int F[n+2];
		F[0]=0;
		F[1]=1;
		for(int i=2;i<=n;i++)
			F[i]=(F[i-1]+F[i-2])%10;     //directly last digit; no need of fib. no. calculation
		if(F[new_n]>=F[new_m])
			return (F[new_n]-F[new_m]);
		else
			return 10-((F[new_n]-F[new_m]));
					
}
 
int main()
	{
	long long int m,n;
	cin>>m>>n;
	int result=fib_last_digit(n,m);
	cout<<result<<"\n";
	}
