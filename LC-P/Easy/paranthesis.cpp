#include <iostream> 
#include <bits/stdc++.h>
#include <string>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
bool valid(string s){
	stack <char> st;
	for(char c : s){
		if(st.empty()|| c == '(' || c == '{' || c == '['){
			st.push(c);
		}
		else{
			if((c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '['))
				return false;
			st.pop();
		}
	}
	if(st.empty())
		return true;
	else
		return false;
}
int main(){
	string str;
	cin >> str;
	bool ans = valid(str);
	if( ans == 0)
		cout << "false";
	else
		cout << "true";
}