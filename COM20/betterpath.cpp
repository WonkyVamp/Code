#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	// vector<int> v1;
	// vector<int> v2;
	vector<string> s1;
	int t;
	cin >> t;
	for( int j=0; j<t; j++)
	{
		int x=0,y=0;
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s1;
		char curr=s[0];
		s1.push_back(curr);
		for ( int i=1; i<n; i++)
		{
			if(curr=='L' || curr=='R')
			{
				if(s[i]=='L' || s[i]=='R')
					continue;
				else
				{
					curr=s[i];
					s1.push_back(curr);
				}
			}
			else if(curr=='U' || curr=='D')
			{
				if(s[i]=='U' || s[i]=='D')
					continue;
				else
				{
					curr=s[i];
					s1.push_back(curr);
				}
			}
		}
		for( int i=0; i<s1.size(); i++)
		{
			if(s1[i]=='L')
				x=x-1;
			else if(s1[i]=='R')
				x=x+1;
			else if(s1[i]=='U')
				y=y+1;
			else if(s1[i]=='D')
				y=y-1;
		}
		cout << x << " " << y << "\n";
	}
	// for( int i=0; i<t; i++)
	// {
	// 	cout << v1[i] << " " << v2[i] << endl;
	// }
}