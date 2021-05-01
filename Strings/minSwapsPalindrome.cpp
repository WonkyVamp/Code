#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n=s.length();
	int i=0,j=n-1,x=n-1;
	while(i<n/2 && j>i){
		if(s[i]==s[j]){
			i++;
			j--;
			x--;
		}
		else{
			while(s[j]!=s[i])
				j--;
			swap(s[j],s[x]);
			cout << s;
			i++;
			x--;
			j=x;
		}
	}
	cout << s;
}