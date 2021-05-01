#include <bits/stdc++.h>
#include <string>
#define ll long long
#define rep(i,n) for( ll i=0; i<n; i++)
using namespace std;
string reorder(string s, std::map<char, int> map)
{

}
int main()
{
	string s;
	cin >> s;
	ll n= s.size();
	std::map<char, int> map;
	rep(i,n)
	{
		map[s[i]]++;
	}
	int ctr=0;
	if( n % 2 == 0 )
	{
		for( auto it= map.cbegin(); it != map.cend(); it++ )
		{
			int k = it-> second;
			if ( k% 2 != 0 ){
				ctr =-1;
				break;
			}
		}
		if( ctr == 0 )
			cout << "YES";
		else
			cout << "NO SOLUTION";
	}
	else
	{
		cout << "YES";
	}
}
