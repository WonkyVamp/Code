#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	double x, y, z;
	cin >> x >> y >> z;
	double n = y/x;
	n = n * z;
	if(floor(n) == n)
		cout << n-1;
	else
		cout << floor(n);
}