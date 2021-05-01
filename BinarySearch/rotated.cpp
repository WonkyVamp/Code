#include <bits/stdc++.h>
using namespace std;
int countRotations(int low, int high, int a[])
{
	int mid=low + (high-low)/2;
	if( low <= high )
	{
		if( a[low] <= a[high] )
		{
			return low;
		}
		int next=(mid+1)%9;
		int prev=(mid+9-1)%9;
		if( a[mid] <= a[next] && a[mid] <= a[prev])
			return mid;
		if( a[mid] <= a[high])
			return countRotations(low, mid-1, a);
		if ( a[mid] >= a[low] )
			return countRotations(mid+1, high , a);
	}
}
int main()
{
	int a[]={11,12,15,18,2,5,6,8,9};
	int x=countRotations(0,9, a);
	cout << x ;
	
}