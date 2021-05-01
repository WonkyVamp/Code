#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n, q;
	cin >> n;
	string s;
	cin >> s;
	cin >> q;
	int t, a, b;
	for(int i =0; i<q; i++){
		cin >> t >> a >> b;
		if(t == 1){
			char temp = s[a-1];
			s[a-1] = s[b-1];
			s[b-1] = temp;
		}
		else if(t == 2){
			int j = 0;
			while(j < n){
				char temp = s[j];
				s[j] = s[j+n];
				s[j+n] = temp;
				j++;
			}
		}
	}
	cout << s;

}