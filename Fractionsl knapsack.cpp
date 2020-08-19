#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

double loot(vector<int> &value, vector<int> &weight, int W)
{
	
	int n=value.size();
	double v_by_w[n];
	double net_v=0.0;
	for(int i=0;i<n;i++)
		{
			v_by_w[i]=((value[i]*1.0)/weight[i]);
		}
		
	//after sorting v by w from high to low and value and weights corresponding to that
//SORTING

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
			if(v_by_w[j]>=v_by_w[i])
				{
					double temp=v_by_w[i];
					v_by_w[i]=v_by_w[j];
					v_by_w[j]=temp;  
					
					temp=value[i];
					value[i]=value[j];
					value[j]=temp;
					
					temp=weight[i];
					weight[i]=weight[j];
					weight[j]=temp;
				}
		}
	double fill=0.0;		
	
	
	for(int i=0;i<n;i++)
		{
			if(weight[i]>W)
				fill=W;
			else
				fill=weight[i];   	//	W=W-(weight[i]); u can't directly do that as it might lead to -ve W.
									//  u need to check if the given W is more or weight[i];
		
			net_v=net_v+(fill*v_by_w[i]);      
			W=W-fill;
			weight[i]=weight[i]-fill;
			if(W==0)
				break;
		}
	return net_v;	
}


int main()
{
	int n=0,W=0;
	cin>>n>>W;
	vector<int>  value(n);
	vector<int> weight(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>value[i]>>weight[i];
	}	
	double result = loot(value, weight, W);
	
	cout.precision(10);
	cout<< result <<'\n';
}
