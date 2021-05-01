#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s;
	string t="";
	cin.ignore();
	getline(cin,s);
	int freq[26];
	memset(freq,0,sizeof(freq));
	for( int i=0; i<s.length(); i++)
		freq[str[i]-'a']++;
	for( int i=0; i<s.length(); i++)
	{
		cout << str[i] << freq[str[i]-'a'] << " ";
		freq[str[i]-'a']=0;
	}
}

