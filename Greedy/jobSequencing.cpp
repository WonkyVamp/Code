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
bool sortby(const pair<int,pair<int,int>> &a, 
                   const pair<int,pair<int,int>> &b){
	if(a.second.first==b.second.first)
		return a.second>b.second;
	return a.second.first<b.second.first;
}
int main(){
	int t;
	cin >> t;
	tc(z,t){
		int n;
		cin >> n;
		int m =3*n;
		int arr[m];
		vector<pair<int,pair<int,int>>> v;
		tc(i,m){
			cin >> arr[i];
		}
		for(int i=0; i<m-3; i+=3){
			v.push_back({i,{arr[i+1],arr[i+2]}});
		}
		sort(v.begin(), v.end(), sortby);
		int j=0;
		int ctr =1;
		int profit = v[j].second.second;
		for(int i=1; i<n; i++){
			if(v[i].second.first>v[j].second.first){
				ctr++;
				profit += v[i].second.second;
				j=i;
			}
		}
		cout <<ctr <<" " << profit << endl;
	}
}
