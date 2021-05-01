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
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		string str,patt;
		cin >> str;
		cin >> patt;
		unordered_map<char, int> map;
		for(int i=0; i<str.size(); i++){
			if(map.find(str[i]) == map.end()){
				map[str[i]]=i;
			}
		}
		int min_i = 10000000;
		int flag =0;
		rep(i,patt.size()){
			if(map.find(patt[i]) != map.end()){
				flag = 1;
				if( min_i > map[patt[i]] )
					min_i = map[patt[i]];
			}
		}
		if(flag)
			cout << str[min_i] << endl;
		else
			cout << "$" << endl;
	}
	return 0;
}