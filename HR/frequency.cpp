#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s;
	int c=0,ctr=0,ctr1=0;
	string t="";
	int lol=0;
	int yay=0;
	getline(cin,s);
	int freq[26]={0};
	// memset(freq,0,sizeof(freq));
	for( int i=0; i<s.length(); i++)
	{ 
		++freq[s[i]-'a'];
	}
	for( int i=0; i<s.length(); i++)
	{
		if(freq[s[i]-'a']!=0)
		{
			cout << s[i] << freq[s[i]-'a'] << " ";
			freq[s[i]-'a']=0;
		}
	}
	for( int i=0; i<s.length(); i++)
	{
		
	}

