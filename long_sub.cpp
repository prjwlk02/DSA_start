#include<iostream>
#include<vector>

using namespace std;

int long_sub(const vector<int> &A )
{
	int n=A.size();
	int count[n];
	for(int i=0;i<n;i++)
		count[i]=1;
	for(int i=1;i<n;i++)
	{	
		for(int j=0;j<i;j++)
		{
			if(A[j]<A[i] && count[j]+1>count[i])
				count[i] = count[j]+1;	
		}
	
	}
	int max=count[0];
	for(int i=0;i<n;i++)
		if(count[i]>max)
			max = count[i];
	return max;
}


int main()
{
	
	vector<int> A{1,4,6,3,2};
	cout<<long_sub(A);
}
