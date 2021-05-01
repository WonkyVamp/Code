#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin >> n >> q;
	int m;
	cin >> m;
	vector <int> v;
	int ctr=0;
	for( int i=0; i<m ; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int arr[n+1]={-1};
	for( int i=0; i<v.size(); i++)
	{
		arr[v[i]]=1;
		ctr++;
	}
	for( int i=1; i<n; i++ )
	{
		int lol =0;
		int j=i;
		int x=i+q;
		// if (x>n)
		// 	break;
		for( j=i; j<i+q; j++)
		{
			if( arr[j]==1)
			{	
				lol=100;
				break;
			}
			else if(j>n)
				break;
		}
		if( lol == 100)
			continue;
		else
		{
			//cout << j-1 << endl;
			arr[j-1]=1;
			ctr++;
		}
	}
	cout << ctr ;
}