#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		ll r, b, d;
		cin >> r >> b >> d;
		if(r>b)
		swap(r,b);
		//cout << r << b;
		if((r*(d+1))>=b)
			cout << "YES" << endl;
		else
			cout<< "NO" << endl;
	}
}