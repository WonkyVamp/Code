#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int MAX = 100000000; 
unordered_map <ll,ll>m;
int factor[MAX] = { 0 }; 
void generatePrimeFactors() 
{ 
    factor[1] = 1; 
    for (int i = 2; i < MAX; i++) 
        factor[i] = i; 
    for (int i = 4; i < MAX; i += 2) 
        factor[i] = 2; 
    for (int i = 3; i * i < MAX; i++) { 
        if (factor[i] == i) { 
            for (int j = i * i; j < MAX; j += i) { 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
} 
int calculateNoOFactors(int n) 
{ 
    if (n == 1) 
        return 1; 
    int ans = 1; 
    int dup = factor[n]; 
    int c = 1; 
    int j = n / factor[n]; 
    while (j != 1) { 
        if (factor[j] == dup) 
            c += 1; 
        else { 
            dup = factor[j]; 
            ans = ans * (c + 1); 
            c = 1; 
        } 
        j = j / factor[j]; 
    } 
    ans = ans * (c + 1); 
    return ans; 
    m[n]=ans;
} 
int main()
{
	generatePrimeFactors(); 
	int t;
	cin >> t;
	for( int i=0; i<t; i++)
	{
		ll a,b;
		int ctr=0;
		cin >> a >> b;
		vector <int>v;
		for( int j=a; j<=b; j++)
		{
			//cout << m[j];
			if ( m[j]==0){
				m[j]=calculateNoOFactors(j);
			}
			v.push_back(m[j]);			
		}
		sort(v.begin(),v.end());
		int m=v[b-a];
		for( int j=(b-a); j>0; j--)
		{
			//cout << v[j];
			if(v[j]==m)
				ctr++;
			else 
				break;
		}
		cout << (ctr+1) << endl ;
	}
}