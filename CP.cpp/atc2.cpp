#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i =0; i<n; i++)
		cin >> a[i];
	for(int i =0; i<n; i++)
		cin >> b[i];
	int maxi = *max_element(a, a+n);
	int mini = *min_element(b, b+n);
	if(mini < maxi)
		cout << 0;
	else
		cout << (mini - maxi +1);
}