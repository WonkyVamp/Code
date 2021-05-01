#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int n;
	int min=0;
	cin >>n;
	string s;
	cin >> s;
	int ctr[4]={0};
	for( int i=0; i<s.length(); i++)
	{
		if(int(s[i])>=65 & int(s[i])<=90)
		{
			ctr[0]++;

		}
		else if(int(s[i])>=97 & int(s[i])<=122)
		{
			ctr[1]++;
		}
		else if(int(s[i])>=48 & int(s[i])<=57)
		{
			ctr[2]++;
		}
		else if(s[i]=='!'  | s[i]=='@'| s[i]=='#'|s[i]=='$'|s[i]=='%'| s[i]=='^'| s[i]=='&'| s[i]=='*'| s[i]=='('| s[i]==')'| s[i]=='-'| s[i]=='+')
		{
			ctr[3]++;
		}
		
	}
	for(int i=0; i<4; i++)
	{
		if(ctr[i]==0)
			min++;
	}
	int x=6-(s.length()+min);
	if(x>0)
		min=min+x;
	cout << min;
}

