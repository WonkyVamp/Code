#include <iostream>
#include <string>
#include <sstream>

using namespace std;

static string str;
 int ctr=0;
void permute(string s, int l, int r)

{ 
	
	if(l==r)
	{cout << s << endl;

		if(s>str) 
			ctr++;
	}
		else
		{
		for(int j=l;j<r;j++)
		{
			swap(s[l],s[j]);
			
			permute(s,l+1,r);
			swap(s[l],s[j]);
			
		}
	}
	
}

int main()
{
	int n;
	cin >> n;
	stringstream ss;
	ss << n;
	string s1;
	ss >> s1;
	str=s1;
	int len=s1.size();
	permute(s1,0,len-1);
	cout << ctr;
}