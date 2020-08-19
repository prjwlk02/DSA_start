#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;

vector<int> multipoly(vector<int> &A, vector<int> &B)
{
	int n=A.size();
	vector<int> product(2*n+3);
	for(int i=0;i<2*n-1;i++)
	{
		product[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			product[i+j]=product[i+j]+A[i]*B[j];			
		}
	}
	return product;
}
int main()
{
	int n;
	cin>>n;
	vector<int> A(n),B(n);
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>B[i];
	}
	vector<int> result=multipoly(A,B);
	for(int i=0;i<2*n-1;i++)
	cout<<result[i]<<" ";
	
}
