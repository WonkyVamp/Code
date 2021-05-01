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
bool sortby(const pair<int,int> &a, 
                   const pair<int,int> &b){
	return a.second<b.second;
}
int main(){
	int t;
	cin >> t;
	tc(z,t){
		int n;
		cin >> n;
		int start[n];
		int finish[n];
		vector<pair<int , int>> v;
		tc(i,n){
			cin >> start[i];
		}
		tc(i,n){
			cin >> finish[i];
		}
		for(int i=0; i<n; i++){
			v.push_back(make_pair(start[i],finish[i]));
		}
		sort(v.begin(), v.end(), sortby);
		int ctr=1;
		int j=0;
		for(int i=1; i<n; i++){
			//cout << v[i].first << v[i].second <<endl;
			if(v[i].first>=v[j].second){
				ctr++;
				j=i;
			}
		}
		cout << ctr << endl;
	}
}