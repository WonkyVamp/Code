#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int q;
	cin >> q;
	set<int> s;
	while(q--)
	{
		int x,y;
		cin >> y >> x;
		if( y==1 )
		{
			s.insert(x);
			continue;
		}
		else if( y==2 )
		{
			s.erase(x);
			continue;
		}
		else if( y==3 )
		{
			set<int>::iterator itr=s.find(x);
			if(itr == s.end())
                cout << "No\n";
            else
                cout << "Yes\n";
		}	
	}
}

