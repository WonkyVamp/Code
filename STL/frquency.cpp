#include <bits/stdc++.h>
using namespace std;
int maximum( map<int,int>m1)
{
	int max=INT_MIN;
	for( auto it : m1)
	{
		if( it.second > max )
			max=it.second;
	}
	//cout << max;
	return max;
}
int main()
{
	int t;
	cin >> t;
	for( int i=0; i<t; i++ )
	{
		int n,k;
		cin >> n;
		vector<int>v;
		for ( int j=0; j<n; j++ )
		{
			int element;
			cin >> element;
			v.push_back(element);
		}
		map<int,int> m;
		for( int j=0; j<n; j++ )
		{
			m[v[j]]++;
		}
		for( auto it : m)
		{
			int max1=maximum(m);
			cout << max1;
			map<int, int>::iterator itr=m.find(max1);
			cout << itr->first;
			
			
		}
	}
}