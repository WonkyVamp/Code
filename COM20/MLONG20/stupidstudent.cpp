#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 
                        1, 2, 2, 3, 2, 3, 3, 4 }; 
// int countSetBitsRec( ll num) 
// { 
//     ll nibble = 0; 
//     if (0 == num) 
//         return num_to_bits[0]; 
//     nibble = num & 0xf; 
//     return num_to_bits[nibble] + countSetBitsRec(num >> 4); 
// } 
int countSetBitsRec(ll n)
{
     // Java: use >>> instead of >>
     // C or C++: use uint32_t
     n = n - ((n >> 1) & 0x55555555);
     n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
     return (((n + (n >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	ll n,q;
	int t;
	cin >> t;
	for( int j=0; j<t; j++)
	{
		cin >> n >> q;
		ll input;
		std::vector<ll> a;
		for( int i=0; i<n; i++)
		{
			cin >> input;
			a.push_back(input);
		}
		for( int m=0; m<q; m++)
		{
			ll p;
			cin >> p;
			int ctr1=0;
			int ctr2=0;
			for ( int i=0; i< n; i++)
			{
				ll r=a[i]^p;
				int m=countSetBitsRec(r);
				
			 	if( m%2==0)
					ctr1++;
			 	else
				 	ctr2++;
			}
			cout << ctr1 << " " << ctr2 << "\n";
		}
	}
}