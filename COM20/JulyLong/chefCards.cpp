#include <iostream> 
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
class gfg 
{ 
 public: ll sumDigits(ll no) 
 { 
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ; 
 } 
}; 
int main(int argc, char const *argv[])
{
	gfg g;
	int t;
	cin >> t;
	tc(x,t){
		ll n;
		cin >> n;
		ll ctr1=0,ctr2=0;
		rep(i,n){
			ll chef, morty;
			cin >> chef >> morty;
			ll y= g.sumDigits(chef);
			ll z= g.sumDigits(morty);
			//cout << "Hello" << y << z << endl;
			if( y>z )
				ctr1++;
			else if( z>y )
				ctr2++;
			else
			{
				ctr1++;
				ctr2++;
			}
		}
		if( ctr1 > ctr2 )
			cout << 0 << " " << ctr1 << endl;
		else if( ctr2 > ctr1 )
			cout << 1 << " " << ctr2 << endl;
		else
			cout << 2 << " " << ctr1 << endl;
	}
	return 0;
}
