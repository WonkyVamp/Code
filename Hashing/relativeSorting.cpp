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
bool sortbyasc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
    return a.first<b.first; 
} 
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		int n,m;
		cin >> n >>m;
		unordered_map<int, int> um;
		vector <pair <int,int>>v;
		int A1[n],A2[m];
		rep(i,n){
			cin >> A1[i];
			um[A1[i]]++;
		}
		rep(i,m){
			cin >> A2[i];
		}
		rep(i,m){
			auto itr = um.find(A2[i]);
			if(itr != um.end()){
				while(itr->second != 0 ){
					cout << itr->first << " ";
					itr->second--;
				}
				um.erase(itr);
			}
		}
		for( auto itr = um.begin(); itr != um.end(); itr++){
			v.push_back(make_pair(itr->first, itr->second));
		}
		int flag =0;
		sort(v.begin(),v.end(),sortbyasc);
		for(auto itr=v.begin(); itr !=v.end(); ++itr){
			while(itr->second!=0){
				if(flag ==0 ){
					cout << itr->first;
					flag++;
				}
				else{
					cout << " " << itr->first;
				}
				(itr->second)--;
			}
		}
		cout << "\n";
	}
	return 0;
}