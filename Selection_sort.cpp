// Runtime- O(n^2)     i=1;j=(n-1)  i=2;j=(n-2) and so on, so Runtime=(n-1)+(n-2)+......+2+1=(n-2)(n-1)/2=O(n^2)

#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;

int main()
{
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++)
	{ 
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[minIndex])  //   comparing 1st one with all others,then 2nd one with all others after that and so on..
			
			{
			minIndex=j;	
			}
		std::swap(A[i],A[minIndex]);
		}
	}
for(int i=0;i<n;i++)
		cout<<A[i]<<" ";	
}
