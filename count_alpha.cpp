#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

void countSort(char arr[])
{
    char a = 'a';
    int ia = a;
    int len = sizeof(arr)/sizeof(arr[0]);
    int count[26];
    for (int i=0;i<26;i++)
    {
        count[i]=0;
    }
    int index=0;
    for(int i=0;i<len;i++)
    {
        index=((int) arr[i])- ia;
        ++count[index];
    }
    for (int i=1;i<=26;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    char sorted[len];
    for(int i=0;i<len;i++)
    {
        index=((int) arr[i])- ia;
        int n=count[index];
        sorted[n]=arr[i];
        --count[index];
    }
    for(int i=0;i<len;i++)
    {
        arr[i]=sorted[i];
    }
// Your code goes here
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	char X[5]={'w','w','a','v','d'};
	countSort(X);
}
