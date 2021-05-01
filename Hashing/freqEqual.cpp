#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i--)
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		string str;
		cin >> str;
		unordered_map<char, int> map;
		rep(i,str.size()){
			map[str[i]]++;
		}
		int flag =0;
		for( auto itr= map.begin(); itr!=map.end(); ++itr){
			if(( abs(itr->second - (itr++)->second)) !=0 )
				flag++;
			if( flag > 1){
				break;
			}
		}
		if(flag ==1)
			p(1);
		else
			p(0);
	}
	return 0;
}