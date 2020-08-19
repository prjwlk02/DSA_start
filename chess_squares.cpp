
#include<iostream>
using namespace std;

int fac(int n)
{
    if(n==1||n==0)
        return 1;
    return n*fac(n-1);
}
int sq(int A)
{
    int squares=0;
    for(int i=1;i<=A;i++)
    {
        squares=squares+(fac(A)/(fac(A-i)*fac(i)))*(A-(i-1));
    }
    return squares;
}

int main() {
	//code
	int T;
	cin>>T;
	int A[T];
	for(int i=0;i<T;i++)
	    cin>>A[i];
	for(int i=0;i<T;i++)
        cout<<sq(A[i])<<" ";
	
	return 0;
}

// A better way to write n*(n+1)*(2n+1)/6 
    return (n * (n + 1) / 2) * (2*n + 1) / 3; 
//For a grid of size n*n the total number of squares formed are

1^2 + 2^2 + 3^2 + … + n^2 = n(n+1)(2n+1) / 6
