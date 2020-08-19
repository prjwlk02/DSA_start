
#include<iostream>

using std::cin;
using std::cout;

long long int Fib_sum_last_digit(int n)
{
		int F[n+2];
		F[0]=0;
		F[1]=1;
		for(int i=2;i<=n+2;i++)

//			F[i]=(F[i-1]+F[i-2]);      Can't use this for large fib. nos. So, we will directly find modulo
			F[i]=(F[i-1]+F[i-2])%10;    // we have found remainder only
			
	
		
		if(F[n+2]==0)   // means F_sum_last_digit==9i.e. 1 less
			return 9;
		else
			return F[n+2]-1; //as it is

}

//If n is very large; Since we need to find last digit i.e. we need to divide it by 10 and period of remainder(fib%10) is 60.
// So, we will find new_n and use that.

long long int Fib_sum_last_digit_fast(int n)
{
		int new_n=(n+2)%60;     //as our max is n+2
		int F[new_n+2];
		F[0]=0;
		F[1]=1;
		for(int i=2;i<=new_n;i++)
			F[i]=(F[i-1]+F[i-2])%10;
			
		if(F[new_n]==0)   // means F_sum_last_digit==9i.e. 1 less
			return 9;
		else
			return F[new_n+2]-1; //as it is
		
}

int main()
	{
	int n;
	cin>>n;
	long long int result=Fib_sum_last_digit_fast(n);
	cout<<result<<"\n";
	}
	




