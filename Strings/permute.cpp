// C++ program to print all 
// permutations with duplicates allowed 
#include <bits/stdc++.h> 
using namespace std; 


// Function to print permutations of string 
// This function takes three parameters: 
// 1. String 
// 2. Starting index of the string 
// 3. Ending index of the string. 
void printAllPermutations(string s) 
{ 
      
    // Sorting String 
    string temp(s); 
    sort(temp.begin(), temp.end()); 
  
    // Print first permutation 
    cout << temp << endl; 
  
    // Finding the total permutations 
    int total = calculateTotal(temp, temp.length()); 
    for (int i = 1; i < total; i++)  
    { 
        nextPermutation(temp); 
    } 
} 
void permute(string a, int l, int r) 
{ 
	// Base case 
	if (l == r) 
		cout<<a<<endl; 
	else
	{ 
		// Permutations made 
		for (int i = l; i <= r; i++) 
		{ 

			
			swap(a[l], a[i]); 

			cout << a << " " << i << " " << l << endl;
			permute(a, l+1, r); 

			//backtrack 
			swap(a[l], a[i]); 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	string str = "ABC"; 
	int n = str.size(); 
	permute(str, 0, n-1); 
	return 0; 
} 

// This is code is contributed by rathbhupendra 
