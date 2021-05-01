// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  

void print_max(int a[], int n, int k) 
{ 
    // max_upto array stores the index 
    // upto which the maximum element is a[i] 
    // i.e. max(a[i], a[i + 1], ... a[max_upto[i]]) = a[i] 
    vector <int> v;
    int max_upto[n]; 
  
    // Update max_upto array similar to 
    // finding next greater element 
    stack<int> s; 
    s.push(0); 
    for (int i = 1; i < n; i++) { 
        while (!s.empty() && a[s.top()] < a[i]) { 
            max_upto[s.top()] = i - 1; 
            s.pop(); 
        } 
        s.push(i); 
    } 
    while (!s.empty()) { 
        max_upto[s.top()] = n - 1; 
        s.pop(); 
    } 
    int j = 0; 
    for (int i = 0; i <= n - k; i++) { 
  
        // j < i is to check whether the 
        // jth element is outside the window 
        while (j < i || max_upto[j] < i + k - 1) 
            j++; 
        v.push_back(a[j]);
        

    }
    sort(v.begin(), v.end(), greater<int>()); 
    cout <<v[0] <<  endl; 
} 
  
// Driver code 
int main() 
{ 
    int n;
    cin >> n;
    int a[n];
    for( int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[i]=x;

    }
    //int k = 3; 
    for( int i=0; i<n; i++)
    {
        print_max(a, n, a[i]);
    } 
  
    return 0; 
} 