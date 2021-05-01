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
		int arrival[n];
		int departure[n];
		vector<pair<int , int>> v;
		tc(i,n){
			cin >> arrival[i];
		}
		tc(i,n){
			cin >> departure[i];
		}
		for(int i=0; i<n; i++){
			v.push_back(make_pair(arrival[i],departure[i]));
		}
		sort(v.begin(), v.end(), sortby);
		int ctr=0;
		int j=0;
		bool visited[n]={false};
		visited[0]=true;
		for(int k=1; visited[k]!=true; k++){
		for(int i=1; i<n; i++){
			//cout << v[i].first << v[i].second <<endl;
			if(v[i].first>=v[j].second && !visited[i]){
				visited[i]=true;
				j=i;
			}
		}
		ctr++;
	}
		cout << ctr << endl;
	}
}
+1 -1 method 
// bool sortby(const pair<int, int> &a, const pair<int, int> &b){
//     if(a.first == b.first){
//         return a.second > b.second;
//     }
//     return a.first < b.first;
// }
 // int findPlatform(int arr[], int dep[], int n)
 //    {
 //        vector<pair<int,int>>v;
 //        for(int i=0; i<n; i++){
 //            v.push_back(make_pair(arr[i],1));
 //            v.push_back(make_pair(dep[i],-1));
 //        }
 //        sort(v.begin(), v.end(), sortby);
 //        int ctr = 0, req = 1;
 //        for(int i = 0; i<2*n; i++){
 //            if(v[i].second == 1)
 //                ctr++;
 //            else
 //                ctr--;
 //            req = max(ctr, req);
 //        }
 //        return req;
 //    }