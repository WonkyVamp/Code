#include <iostream> 
#include <algorithm>
#include <vector>
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(x,t){
		ll n;
		cin >> n;
		ll arr[n];
		rep(j,n){
			cin >> arr[j];
		}
		int i=0,a=0,b=0;
    	while(i<n-1){
        	while(i<n-1 && arr[i+1]<=arr[i])
	        	i++;
	        if(i==n-1)
	        	break;
	        a=i++;
	        while(i<n && arr[i]>=arr[i-1])
	        	i++;
	        b=i-1;
	        cout<<"("<<a<<" "<<b<<")"<<" ";
	    }
	    if(a==0 && b==0)
	    	cout<<"No Profit";
	    cout << "\n";
	}
	return 0;
}