#include <iostream> 
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
void printss( char a[][8]){
	rep(i,8){
		rep(j,8){
			cout << a[i][j];
		}
		cout << "\n";
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	tc(x,t){
		ll k, res=0;
		cin >> k;
		char chess[8][8];
		chess[0][0] = 'O';
		rep(i,8){
			rep(j,8){
				if ( i==0 && j==0 ) 
					continue;
				if( res == k-1 ){
					chess[i][j]='X';
				}
				else{
					chess[i][j] = '.';
					res++;
				}
			}
		}
		printss(chess);
	}
	return 0;
}