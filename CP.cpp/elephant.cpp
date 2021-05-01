#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,c;
		int sum=0;
		cin >> n >> c;
		int arr[n];
		for( int i=0; i<n; i++)
		{
			cin >> arr[i];
			sum=sum+arr[i];
		}
		(sum <= c ) ? cout << "Yes" << endl : cout << "No" << endl ; 
	}
	
}

