#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin >> s;
	int ctr=0;
	for(int i=0; i<s.length(); i++)
	{
		if(int(s[i])>=65 & int(s[i])<=90)
		{
			ctr++;
		}
	}
	cout << (ctr+1);
}