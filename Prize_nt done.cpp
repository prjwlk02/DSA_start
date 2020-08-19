#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

vector<int> prize(int n)
{
	int point=n;
	vector<int> points;
	for(int i=n-1;i=1;i--)
	{
		if(n%i==0)
		{
		point=i;
		points.push_back(point);
		}
	}
}

int main()
{
	int n;
	cin>>n;
	vector <int> result=prize(n);
	cout<<result.size()<<'\n';
	for(int i=0;i<result.size();i++){
	cout<<result[i]<<'\n';
	}
}
