#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int n,l;
	cin >> n;
	string s;
	string t="";
	string t1="";
	cin >> s;
	char m;
	for( int i=0; i<n; i++)
	{
		char c=s[i];
		if(c==s[i+1])
		{
			m=c;
			break;
		}
	}
	for( int i=0; i<n; i++)
	{
		if(s[i]==m)
			continue;
		t=t+s[i];
	}
	for(int i=0; i<t.length(); i++)
	{
		for(int j=0; j<t.length(); j++)
		{
			char k1=t[i];
			char k2=t[j];
			for(int k=0; k<t.length(); k++)
			{
				if(t[k]!=k1 | t[k]!=k2)
					continue;
				l=1;
			}
			if(l==1)
				t1=t1+
		}
	}
	cout << t1;
}