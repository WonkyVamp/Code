#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int q;
	cin >> q;
	std::map<string,int> m;
	vector<int>v;
	while(q--)
	{
		string name;
		int type,marks;
		cin >> type  >> name;
		if(type==1)
		{
			cin >> marks;
			m[name]+=marks;
			continue;
		}
		else if(type==2)
		{	
			m[name]=0;
			continue;
		}
		v.push_back(m[name]);
		
	}
	for( int i=0; i<v.size(); i++)
	{
		cout << v[i] << endl;
	}
}



