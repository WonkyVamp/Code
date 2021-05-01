#include <iostream>
#include <algorithm>
#include <vector>
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
string utiloo(string s1, string s2){
	string s3;
	int m = min(s1.size(), s2.size());
	int j = 0;
	while(j<m){
		if(s1[j]!=s2[j])
			break;
		s3.push_back(s1[j]);
		j++;
	}
	return s3;
}
string longestCommonPrefix(vector<string>& strs)
{
	int n=strs.size();
    string ans="";
    if(n==0)
        return ans;
   sort(strs.begin(), strs.end());
   return utiloo(strs[0],strs[strs.size()-1]);
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(z,t){
		std::vector<string> v;
		int n;
		cin >> n;
		for(int i=0; i<n; i++){
			string s;
			cin >> s;
			v.push_back(s);
		}
		string s = longestCommonPrefix(v);
		if(s.empty()){
			p(-1);
		}
		else
			cout << s << endl;
	}
	return 0;
}