#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,k,ctr=0;
	cin >> n>>k;
	
	int arr[n];
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(i==k)
			max=arr[i];
	}
	//cout << max;
	for(int j=0;j<k;j++)
	{

		if(arr[j]>=max and arr[j]>0 and max>0)
			ctr++;
	}
	for(int m=k;m<n;m++)
	{
		if(arr[m]==max and max>0)
			ctr++;
	}
	

cout << ctr;

}