#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin >> s;
	ll ctr=1;
	ll max=0;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	std::map<char, ll> m;
	m['A']=m['C']=m['T']=m['G']=0;
	for( int i=0; i< s.size(); i++ )
	{
		if(s[i]==s[i+1])
		{
			ctr++;
		}
		else
		{
			if( ctr > m[s[i]])
				m[s[i]]=ctr;
			ctr=1;
		}
	}
	for(auto it = m.cbegin(); it != m.cend(); ++it )
	{

	    if (it ->second > max)
	    {
	        max = it->second;
	    }
	}
	cout << max ;
}