#include <iostream> 
#include <algorithm>
#include <string>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(z,t){
		ll n;
		cin >> n;
		ll arr[n];
		rep(i,n){
			cin >> arr[i];
		}
		ll initialreq=1,sum=0,i=0;
		while(i<n){
			sum+=arr[i];
			if(sum < 0 ){
				initialreq+=(0-sum);
				sum+=initialreq;
			}
			else if(sum == 0 ){
				initialreq++;
				sum+=initialreq;
			}
			i++;
		}
		cout << initialreq << endl;
	}
}
