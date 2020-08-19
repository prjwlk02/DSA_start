#include<iostream>
using std::cin;
using std::cout;

int Get_change(int money)
{
	int Den[3]={10,5,1};
	int num=0;
	
	if(money==0)
		return num;
	
	for(int i=0;i<=2;i++)
	    if(money>=Den[i])
			{
			num=num+money/Den[i];
			money=money%Den[i];
			}

	return num;
}

int main()
{
	int	money;
	cin>>money;
//	int result = Get_change(money)<<'\n';
	cout<<Get_change(money)<<'\n';
}
