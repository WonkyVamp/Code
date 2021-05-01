#include <iostream>
#include <algorithm>
#include <map>
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
		string s;
		cin >> s;
		std::map<char, int> map;
		int flag =0;
		int i=0;
		for(i=0; i<s.size(); i++){
			if(map[s[i]] ==1 ){
				flag =1;
				break;
			}
			else
				map[s[i]]++;
		}
		if(flag)
			cout << s[i] << endl;
		else
			p(-1);
	}
	return 0;
}