
#include <iostream>
#include <map>
using namespace std;

int main() {
	int n,k;
	cin >> n;
	long long arr[n];
	cin >>k;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	map <int,int>map;
	for(int l=0; l<=k; l++){
		map[l]=0;
		cout << l << map[l] << endl;
	}
	int i=0, j=1;
	while(i<j && j<n && i<n-1){
		if((arr[i]^arr[j])<=k){
			int y= arr[i] ^ arr[j];
			//cout << y;
			map[y]++;
			if(j==n){
				i++;
				j=i+1;
			}
			else  {
				j++;
			}
		}
		
	}
	// for(int i=0; i<=k; i++){
	// 	cout << map[i] << " ";
	// }
	return 0;
}


