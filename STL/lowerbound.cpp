#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin >> n;
	vector <int> v;
	vector <string> v1;
	vector <int> v2;
	for( int i=0; i<n; i++)
	{
		int c;
		cin >> c;
		v.push_back(c);
	}
	sort(v.begin(),v.end());	
	int q;
	cin >> q;
	for( int i=0; i<q; i++)
	{
		int t;
		int c;
		cin >> c;
		std::vector<int>::iterator low1;
		low1 = std::lower_bound(v.begin(), v.end(), c); 
		if( v[low1-v.begin()]==c)
			cout << "Yes" << " " <<(low1-v.begin()+1) << endl;
		else
			cout << "No" <<" " <<(low1-v.begin()+1) << endl; 
	}
}

