#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int n,m1;
	int t;
	cin >> t;
	for( int j=0; j<t; j++)
	{
		int min=INT_MAX;
		cin >> n >> m1;
		std::vector<int> f;
		map<int,int> m;
		int type,bprice;
		for( int i=0; i<n; i++)
		{
			cin >> type;
			f.push_back(type);
		}
		for( int i=0; i<n; i++)
		{
			cin >> bprice;
			m[f[i]]+=bprice;
		}
		map<int, int>::iterator it=m.begin();
		for(it =m.begin(); it != m.end(); it++)
		{
			if( it->second<min )
			{
				min=it->second;
			}
		}
		cout << min << "\n";
	}
}