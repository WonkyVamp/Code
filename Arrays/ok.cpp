#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	stack <char> s1;
	int ctr=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='r'|| s[i]=='R')
			s1.push('R');
		else if((s[i]=='l'|| s[i]=='L') && !s1.empty()){
			s1.pop();
			if(s1.empty())
			ctr++;
		}
	}
	cout << ctr;
}