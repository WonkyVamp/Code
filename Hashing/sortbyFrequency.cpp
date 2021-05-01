#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <utility>
#define ll long long
#define MOD 1000000007
#define tc(i,t) for( int i=0; i<t; i++ )
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep11(i,n) for( ll i=1; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define repr(i,n) for( ll i=n-1; i>=0; i-- )
#define p(i) cout << i << endl
using namespace std;
bool sortbysecdesc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
	if(a.second == b.second)
		return a.first < b.first;
    return a.second>b.second; 
} 
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	tc(y,t){
		int n;
		cin >>n;
		int A[n];
		std::map<int, int> map;
		vector <pair <int,int>>v;
		rep(i,n){
			cin >> A[i];
			map[A[i]]++;
		}
		for( auto itr = map.begin(); itr != map.end(); itr++){
			v.push_back(make_pair(itr->first, itr->second));
		}
		sort(v.begin(),v.end(),sortbysecdesc);
		int flag =0;
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