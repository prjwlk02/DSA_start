#include<iostream>

using std::cin;
using std::cout;

int get_period(long long int m)
	{
		int a=0,b=1,c=a+b,period=0;
		
		for(int i=1;i<m*m;i++)
			{
		//	int temp=c;
			c=(a+b)%m;
			a=b;
			b=c;
			if(a==0 && b==1)
				{
				period=i;
				}
			}
			
		return period;
	}
	
	
long long int Fn_modulo_m(long long int n, long long int m)
{
    long long int new_n=(n%get_period(m));
	
	int F[n];
		F[0]=0;
		F[1]=1;
		for(int i=2;i<=new_n;i++)
			{
			F[i]=(F[i-1]+F[i-2])%m;
			
			}
		return F[new_n];
}


int main()
	{
		long long int n=0,m=0;
		cin>>n>>m;
		long long int result=Fn_modulo_m(n,m);
		cout<<result<<"\n";		
}
