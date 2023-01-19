//pair of sum
#include<iostream>
using namespace std;
void sum1(int arr[],int size,int sum)
{
	for(int i=0;i<size;i++)
	{
		
	for(int j=1;i<size;i++)
		{
		
		if(arr[i]+arr[j]==sum)
		{
			cout<<arr[i]<<" "<<arr[j];
		}
	}
	
}
}
main()
{
	int arr[5]={2,3,4,5,6};
	int sum;
	cin>>sum;
	sum1(arr,5,sum);
}
