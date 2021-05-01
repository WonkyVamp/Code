#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
bool alldist(int a,int b,int c,int d){
    if(a==b || a==c || a==d)
        return false;
    if(b==c|| b== d)
        return false;
    if(c==d)
        return false;
    return true;
}
void solve(int a[],int n,int k){
	unordered_map<int, pair<int,int> >um;
	rep(i,n-1){
		rep11(j,n){
			um[a[i]+a[j]]={i,j};
		}
	}
	set<multiset<int> > s;
	bool flag=0;
	rep(i,n-1){
		rep11(j,n){
			ll sum = a[i]+a[j];
			if(um.find(sum-k) != um.end()){
				pair <int,int> p = um[sum-k];
				if (p.first != i && p.first != j 
                    && p.second != i && p.second != j){
                multiset<int>po;
                po.insert(a[p.first]);po.insert(a[p.second]);po.insert(a[i]);po.insert(a[j]);
                flag = 1;
                s.insert(po);
				}
			}
		}
	}
	if(!flag)
        cout<<-1;
    else {
        for(auto i:s){
            for(int j:i)
                cout<<j<<" ";
            cout<<"$";
        }
    }
    cout<<endl;
}	

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		int n,k;
		cin >> n >> k;
		int a[n];
		rep(i,n){
			cin >> a[i];
		}
		solve(a,n,k);
	}
	return 0;
}