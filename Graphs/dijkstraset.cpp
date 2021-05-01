#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007
#define fi first
#define se second
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define repe(i,n) for(int i = 0 ; i <= n ; i++)
#define repb(i,a,b) for(int i = a ; i < b ; i++)
#define repeb(i,a,b) for(int i = a ; i <= b ; i++)
#define rfor(i,n,a) for(int i = n ; i >= a ; i--)
#define pb push_back
#define popb pop_back()
#define newLine cout << "\n"
#define endl "\n"
#define pii pair<int,int> 
#define pll pair < long long, long long >
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
#define sortv(v) sort(v.begin(),v.end())


/*-------------------------------------------------*/

#define vi vector<int>
#define vb vector<bool>

ll n, m;

void dijkstra(vector<pll> *adj) {

	vi distance(n+1,1e9);
	vb vis(n+1,false);

	multiset<pll> q;
	q.insert({0,1});
	distance[1] = 0;

	while(!q.empty()) {

		pll x = *q.begin();
		q.erase(x);
		if(vis[x.se]) continue;
		vis[x.se] = true;

		for(auto it : adj[x.se]) {
			if(!vis[it.fi]) {

				ll newDist = distance[x.se] + it.se;
				ll currDist = distance[it.fi];
				if(currDist > newDist) {
					distance[it.fi] = newDist;
					q.insert({newDist, it.fi});
				}
			}
		}
	}

	for(int i = 2 ; i <= n ; i++) {
		cout << distance[i] << " ";
	}
}

void solve() {
	cin >> n >> m;
	vector<pll> adj[n+1];
	int f,t,d;

	rep(i,m) {
		cin >> f >> t >> d;
		adj[f].pb({t,d});
	}

	dijkstra(adj);
}

int main()
{
	fastio;
	solve();
	return 0;
}
