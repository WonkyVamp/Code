#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	for( int i=0; i<n; i++)
	{
		int c;
		cin >> c;
		v.push_back(c);
	}
	int c,a,b;
	cin >> c;
	cin >> a >> b;
	v.erase(v.begin()+(c-1));
	v.erase(v.begin()+(a-1),v.begin()+(b-1));
	cout << v.size() << endl;
	for( int i=0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
}
