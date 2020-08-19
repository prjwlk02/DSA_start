#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;

int max_revenue(int n, vector<int> &profit, vector<int> &click)
{
int Revenue=0;
	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
				{
					if(profit[j]>profit[i])
					{
					
					int temp=profit[i];
					profit[i]=profit[j];
					profit[j]=temp;
					}
				}
		}
		// can't put both swapping of profit and click in same loop as 2nd one(click) will be arranged like 1st one(profit) 

	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
				{
					if(click[j]>click[i])
					{
					
					int temp=click[i];
					click[i]=click[j];
					click[j]=temp;	
					}
				}
		}
		
for(int i=0;i<n;i++)
		{
			Revenue=Revenue+profit[i]*click[i];
		}
	return Revenue;
}

int main()
	{
		int n;
		cin>>n;
		vector<int> profit(n);
		vector<int> click(n);
		for(int i=0;i<n;i++)
		{
			cin>>profit[i]>>click[i];
		}
	int result = max_revenue(n,profit,click);
	cout<<result<<'\n';	 
	}
	
	
