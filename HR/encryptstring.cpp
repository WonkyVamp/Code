#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int n,k,m;
	cin >> n;
	string s;
	string t="";
	cin.ignore();
	getline(cin,s);
	cin >> k;
	//cout << s;
	for (int i =0; i<s.length(); i++)
	{	
		string c="";
		if(isalpha(s[i]))
		{
			int x=int(s[i]);
			x=x+k;
			
				if(isupper(s[i]))
				{
					while(x>90)
					{
						m=x-90;
						x=64+m;
					}
				}
				else if(islower(s[i]))
				{
					while(x>122)
					{
						m=x-122;
						x=96+m;
					}
				}
			
			c=char(x);
			t=t+c;
		}
		else
			t=t+s[i];
	}
	cout << t;
}

