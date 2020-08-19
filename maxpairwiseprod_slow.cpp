#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;
using std::vector; 

long long int Product(const vector<int> &numbers)
	{
	long long int result=0;
		int n=numbers.size();
		for(int a=0;a<n;a++) {
			for(int b=a+1;b<n;b++) {
				if(((long long)numbers[a])*numbers[b]>result)     //or result = std::max(result,numbers[a]*numbers[b]);
					result=((long long)numbers[a])*numbers[b];
			}
		}
	return result;
}

int main()
{
	int n;
	cin>>n;
	vector<int> numbers(n);
	for(int i=0;i<n;i++)
		{
			cin>>numbers[i];
		}
		
 	long long int result = Product(numbers);
	cout<<result<<"\n";
	
}
