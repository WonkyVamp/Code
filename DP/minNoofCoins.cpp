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
void dp(ll n,int arr[]){
	int i=0;
	int flag=0;
	while(n){
		if(n>=arr[i]){
			n-=arr[i];
			if(flag==0){
				cout << arr[i];
				flag =1;
			}
			else
				cout << " " << arr[i];
		}
		else
			i++;
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(z,t){
		ll n;
		cin >> n;
		int arr[10]={2000,500,200,100,50,20,10,5,2,1};
		dp(n,arr);
		cout << "\n";
	}
}
