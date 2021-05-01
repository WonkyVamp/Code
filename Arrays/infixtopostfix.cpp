#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int precedence(char x){
	if(x=='(')
		return 0;
	if(x=='*' || x=='/')
		return 2;
	else
		return 1;
}
string postfix(string s1){
	stack <char> op;
	op.push('N');
	string s3;
	for(int i=0; i<s1.length(); i++){
		if(s1[i]=='(' || s1[i]=='+' ||s1[i]=='-' ||s1[i]=='*' || s1[i]=='/'){
			if(s1[i]=='('|| op.top()=='N'){
				op.push(s1[i]);
				continue;
			}
			else{
				while(precedence(op.top())>=precedence(s1[i]) && op.top() !='N'){
					char s = op.top();
					s3 = s3 + s;
					op.pop();
				}
				op.push(s1[i]);
			}

		}
		else if( s1[i] == ')'){
			while(op.top()!='(' && op.top()!='N'){
				char s=op.top();
				s3 = s3 + s;
				op.pop();
			}
			if(op.top()=='(')
				op.pop();
		}

		else{
			s3=s3+s1[i];
		}
	}
	while(op.top() !='N'){
		char s=op.top();
		s3 = s3 + op.top();
		op.pop();
	}
	return s3;
}
int main(){
	string s;
	cin >> s;
	string s1 = postfix(s);
	cout << s1;
}