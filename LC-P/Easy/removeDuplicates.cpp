#include <iostream> 
#include <algorithm>     
#include <set>
#include <vector>
#define ll long long
#define MOD 1000000007
#define rep(i,n) for( ll i=0; i<n; i++)
#define rep1(i,m) for( ll i=0; i<m; i++)
#define p(i) cout << i << endl
using namespace std;
int removeDuplicates1(vector<int>& nums){
	int count;
	int n = nums.size();
    for(int i=1; i<n; i++){
    	if(nums[i]==nums[i-1])
    		count++;
    	else
    		nums[i-count] = nums[i];
    }   
    return (n-count);
}
int main()
{
	int n,ele;
	cin >> n;
	std::vector<int> v;
	for(int i=0; i<n; i++){
		cin >> ele;
		v.push_back(ele);
	}
	cout << "hello";
	int x = removeDuplicates1(v);
	cout << x << ",";
	for(int i=0; i<x; i++){
		cout << v[i];
	}
}