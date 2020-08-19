#include<iostream>
#include<vector>
#include<algorithm>

using std::vector;
using std::cout;
using std::cin;

long long int Product(const vector<int> &numbers)
	{
		int n=numbers.size();
		int a=0,b=0,index_max=0;
		for(int i=0;i<n;i++)
			{
				if(numbers[i]>a)
					{
					a=numbers[i];
					index_max=i;
					}
		}
		for(int j=0;j<n;j++)
			{
				if(numbers[j]>b && j!=index_max)
					{
						b=numbers[j];
						}	
			}
	long long int result =((long long)a)*b;
 }
 
 
int main()
{
	int n;
	cin>>n;
	vector<int> numbers(n);
	for(int i=0; i<n; i++)
		{
			cin>>numbers[i];
		}
	long long int result = Product(numbers);
	cout<<result<<"\n";
}
