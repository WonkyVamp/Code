#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s;
	string t="";
	cin >> s;
	int i=0,j=0;
	int len=s.length();
	while(j<len)
	{	i=0;
		while(i<s.length())
		{
			if(s[i]==s[i+1])
			{
				i=i+2;
				continue;
			}
			else
			{
				t=t+s[i];
				i=i+1;
			}
		}
		s=t;
		// cout << s << endl;
		t="";
		j++;
	}
	if(s.length()!=0)
		cout << s;
	else
		cout << "Empty String";
}
