#include <bits/stdc++.h>
using namespace std;
int Bsearch(int low, int high, int a[], int x)
{
	if( high >= low )
	{
		int mid = low + (high-low)/2;
		if(x==a[mid])
			return mid;
		if(x<a[mid])
			return Bsearch(low, mid-1, a, x);
		if(x>a[mid])
			return Bsearch(mid+1, high, a, x);
	}
	else 
		return -1;
}
int firstOccurence(int low, int high, int a[], int x)
{
	if ( high >= low )
	{
		int mid = low + ( high-low) /2;
		if ( mid == 0 || a[mid] > a[mid-1] && a[mid]==x)
			return mid;
		if ( x < a[mid] || x==a[mid] && x==a[mid-1] )
			return firstOccurence( low, mid-1, a, x);
		if ( x > a[mid] )
			return firstOccurence( mid+1, high, a, x);
	}
	else
		return -1;
}
int lastOccurence(int low, int high, int a[], int x)
{
	if ( high >= low )
	{
		int mid = low + ( high-low) /2;
		if ( mid == 0 || a[mid] < a[mid+1] && a[mid]==x)
			return mid;
		if ( x < a[mid] )
			return lastOccurence( low, mid-1, a, x);
		if ( x > a[mid] || x==a[mid] && x==a[mid+1] )
			return lastOccurence( mid+1, high, a, x);
	}
	else
		return -1;
}
int main()
{
	int a[]={1,3,6,6,6,6,7,8,9};
	int x=Bsearch(0,9, a, 6);
	int y=firstOccurence(0,9, a, 6);
	int z=lastOccurence(0,9, a, 6);
	cout << x << " " << y << " " << z << endl;
	cout << z-y+1 ;
}