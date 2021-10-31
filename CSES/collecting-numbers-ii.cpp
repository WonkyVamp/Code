#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p1(a) cout << a << "\n" 
#define p2(a,b) cout << a << " " << b << "\n"
#define vi vector<ll>

void solve() {

    int n, m, cnt = 1; cin >> n >> m;
    vector<int> nums(n+1);
    unordered_map<int,int> index;

    for(int i = 1 ; i <= n ; i++) {
    	cin >> nums[i];
    	index[nums[i]] = i;
    }

    for(int num = 1 ; num < n ; num++) {
    	cnt += (index[num] > index[num+1]);
    }

    for(int i = 0 ; i < m ; i++) {
    	int a, b; cin >> a >> b;
    	if(a > b) swap(a, b);
    	int num1 = nums[a], num2 = nums[b];
    	swap(nums[a], nums[b]);
    	swap(index[num1], index[num2]);
    	if(num1 > 1 and index[num1-1] >= a and index[num1-1] < b and num1-num2 != 1) cnt--;
    	if(num1 < n and index[num1+1] >= a and index[num1+1] < b) cnt++;
    	if(num2 > 1 and index[num2-1] > a and index[num2-1] <= b  and num2-num1 != 1) cnt++;
    	if(num2 < n and index[num2+1] > a and index[num2+1] <= b) cnt--;
    	cout << cnt << "\n";
    }

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