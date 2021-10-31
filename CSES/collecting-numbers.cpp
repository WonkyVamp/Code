#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p1(a) cout << a << "\n" 
#define p2(a,b) cout << a << " " << b << "\n"
#define vi vector<ll>

void solve() {

	int n, ans = 1; cin >> n;
    map<int,int> index;
    for(int i = 0 ; i < n ; i++) {
    	int num; cin >> num;
    	index[num] = i;
    }

    for(int i = 1 ; i < n ; i++) {
    	ans += (index[i+1] < index[i]);
    }

    cout << ans;
}


int main()
{

    #ifndef ONLINE_JUDGE
	freopen("/home/devang/input.txt","r",stdin);
	freopen("/home/devang/output.txt","w",stdout);
    #endif

    int tc = 1;
    // cin >> tc;
    while(tc--) {
    	solve();
    }
	
	return 0;
}