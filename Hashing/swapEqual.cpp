#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		ll n,m;
		cin >> n >> m;
		ll a[n],b[m];
		ll sumA=0,sumB=0;
		rep(i,n){
			cin >> a[i];
			sumA += a[i];
		}
		rep(i,m){
			cin >> b[i];
			sumB += b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		ll x = (sumA-sumB)/2;
		int i= 0, j=0, flag =0;
		while(i<n && j<m){
			if((a[i] - b[j]) == x ){
				flag = 1;
				break;
			}
			else if((a[i] - b[j]) < x ){
				i++;
			}
			else if((a[i] - b[j]) > x ){
				j++;
			}
		}
		if(flag)
			p(1);
		else
			p(-1);
	}
	return 0;
}
// / assume array1 is small i.e. (m < n)
// // where m is array1.length and n is array2.length
// 1. Find sum1(sum of small array elements) ans sum2
//   (sum of larger array elements). // time O(m+n)
// 2. Make a hashset for small array(here array1).
// 3. Calculate diff as (sum1-sum2)/2.
// 4. Run a loop for array2
//      for (int i equal to 0 to n-1)
//        if (hashset contains (array2[i]+diff))
//            print array2[i]+diff and array2[i]
//            set flag  and break;
// 5. If flag is unset then there is no such kind of 
// pair.