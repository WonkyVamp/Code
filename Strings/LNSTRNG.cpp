#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i=0; i<t; i++ )
	{
		string s;
		cin >> s; 
		map<char,int> m;
		set <int > s1;
		for( int j=0; j<s.size(); j++ )
		{
			m[s[j]]++;
		}
		map<char,int>:: iterator it=m.begin();
		for( it=m.begin(); it!=m.end(); it++ )
		{
			s1.insert(it->second);
		}
		if(s1.size()>1) 
			cout << "NO\n" ; 
		else
			cout << "YES\n" ;
	}
}
