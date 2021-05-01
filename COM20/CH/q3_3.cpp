// A naive method to find maximum of minimum of all windows of 
// different sizes 
#include <bits/stdc++.h> 
using namespace std; 
  
void printMaxOfMin(int arr[], int n,std::vector<int> v) 
{ 
    // Consider all windows of different sizes starting 
    // from size 1 
    for (int x=0; x<v.size(); x++) 
    { 
        int k=v[x];
        // Initialize max of min for current window size k 
        int maxOfMin = INT_MIN; 
  
        // Traverse through all windows of current size k 
        for (int i = 0; i <= n-k; i++) 
        { 
            // Find minimum of current window 
            int min = arr[i]; 
            for (int j = 1; j < k; j++) 
            { 
                if (arr[i+j] < min) 
                    min = arr[i+j]; 
            } 
  
            // Update maxOfMin if required 
            if (min > maxOfMin) 
              maxOfMin = min; 
        } 
  
        // Print max of min for current window size 
        cout << maxOfMin << " "; 
    } 
} 
  
// Driver program 
int main() 
{ 
    int n;
    cin >> n;
    int a[n];
    std::vector<int> v;
    for( int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[i]=x;
        v.push_back(x);
    }
    printMaxOfMin(a, n,v); 
    return 0; 
} 