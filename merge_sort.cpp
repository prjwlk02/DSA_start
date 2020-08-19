//Divide and conquer(split the arrays into 2 halves and sort the array recursively)
//Runtime-o(n*log(n))

#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;

void Merge(vector<int> &A, int low, int high)
	{	
		int n=A.size();	
		int mid=(high+low)/2;
		
		int i=low; //starting pointer to start of frst_half
		int j=mid+1; //starting pointer to start of secnd_half
		int k=low;	//starting pointer to start of sorted_array
	
	vector<int> Merged_arr(n);
	
		while(i<=mid && j<=high)	{
			if(A[i]>=A[j])
				Merged_arr[k++]=A[j++];
			else
				Merged_arr[k++]=A[i++];
		}
		
		while(i<=mid)						//if the scnd_half array elements are over, we will directly copy the remaining of frst_half in the merged_arr
			Merged_arr[k++]=A[i++];
		while(j<=high)						//if the frst_half array elements are over, we will directly copy the remaining of scnd_half in the merged_arr
			Merged_arr[k++]=A[j++];
	
	
	for(int a=low;a<=high;a++)
		{
			A[a]=Merged_arr[a];
		}
}


void Merge_sort(vector<int> &A, int low, int high)
{
		vector<int> Sorted_A;
		if(low>=high)
		return;
		
		int mid=(high+low)/2;
		
		Merge_sort(A, low, mid);
		Merge_sort(A, mid+1, high);
		
		//Merging the two arrays
		Merge(A, low, high);
}
		
	
	
	
int main()
{
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)
	{	
		cin>>A[i];
	}
	int low=0,high=n;
	
	Merge_sort(A,0,n-1);
	for(int j=0;j<n;j++)
	{
		cout<<A[j]<<" "; 
	}
}
