#include<iostream>

using std::cin;
using std::cout;

long long int GCD(long long int a,long long int b)
	{
		if(a<b)
		{
		long long int temp1=b;
		b=a;
		a=temp1;
		}
		while(a%b!=0)
		{
			long long int temp2=b;
			b=a%b;
			a=temp2;
			GCD(a,b);
		}
	return b;
}

int main()
{
	long long int a=0,b=0;
	cin>>a>>b;
	long long int result=GCD(a,b);
	cout<<result<<"\n";
}
