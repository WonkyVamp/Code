#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <set>
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
		string s1,s2;;
		cin >> s1;
		cin >> s2;
		map <char, int> map1;
		map <char, int> map2;
		set<char>q;
		std::vector<char> v;
		for(int i=0; i<s1.size(); i++){
			map1[s1[i]]++;
		}
		rep(i,s2.size()){
			map2[s2[i]]++;
		}
		rep(i,s2.size()){
			if(map1.find(s2[i]) == map1.end()){
				q.insert(s2[i]);
			}
		}
		rep(i,s1.size()){
			if(map2.find(s1[i]) == map2.end()){
				q.insert(s1[i]);
			}
		}
		for(auto it = q.begin(); it!=q.end(); ++it){
			cout << *it;
		}
		cout << "\n";
	}
	return 0;
}