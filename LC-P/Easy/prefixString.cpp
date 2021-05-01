#include <iostream> 
#include <algorithm>     
#include <string>
#include <vector>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
string longestCommonPrefix(vector<string>& strs){
	int length = strs.size();
	int len;
	sort(strs.begin(), strs.end());
	int len1 = strs[0].size();
	int len2 = strs[length-1].size();

	string str1, str2;
	string str = "";
	str1 = strs[0];
	str2 = strs[length-1];
	if(len1<len2)
		len = len1;
	else
		len = len2;
	for(int i=0; i<len; i++){
		if(str1[i]==str2[i])
			str = str + str1[i];
		else
			return str;
	}
        
}
int main(){
	std::vector<string> v;
	int n;
	cin >> n;
	string st;
	for(int i=0; i<n; i++){
		cin >> st;
		v.push_back(st);
	}
	//cout << "Hello";
	st = longestCommonPrefix(v);
	p(st);
}
