#include <iostream> 
#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int strstr(string haystack, string needle){
	int res, flag =0;
	int nlen = needle.length();
	int hlen = haystack.length();
	if(needle == "")
		return 0;
	else if(nlen > hlen)
		return -1;
	else{
		int j = 0;
		for(int i=0; i< hlen - nlen ; i++){
			if(haystack.substr(i,nlen) == needle) return i;
		}
	}
	return -1;
}
int main(){
	string haystack, needle;
	cin >> haystack >> needle;
	int ans = strstr(haystack, needle);
	cout << ans << endl;
}

H: abcaaba
N: aba