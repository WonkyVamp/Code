#include <bits/stdc++.h>
using namespace std;
int profit(int N,int a[], int b[], int c[]){
	int A[N], B[N], C[N];
	A[0] = a[0];
	B[0] = b[0];
	C[0] = c[0];
	for(int i =1; i<N; i++){
		A[i] = a[i] + max(B[i-1], C[i-1]);
		B[i] = b[i] + max(A[i-1], C[i-1]);
		C[i] = c[i] + max(B[i-1], A[i-1]);
	}
	return max(A[N-1], max(B[N-1], C[N-1]));
}
int main(){
	int N;
	cin >> N;
	int a[N], b[N], c[N];
	for(int i =0; i<N; i++){                                                                 
		cin >> a[i] >> b[i] >> c[i];
	}
	int ans = profit(N,a,b,c);
	cout << ans;
}                                                                                              