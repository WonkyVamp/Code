#include <bits/stdc++.h> 
using namespace std; 
  
// This function returns the least lexicogr 
// aphical string obtained from its two halves 
string leastLexiString(string s) 
{ 
    // Base Case - If string size is 1 
    if (s.size() & 1) 
        return s; 
  
    // Divide the string into its two halves 
    string x = leastLexiString(s.substr(0, 
                                        s.size() / 2)); 
    string y = leastLexiString(s.substr(s.size() / 2)); 
  
    // Form least lexicographical string 
    cout << x+y << endl;
    cout << y+x << endl;
    return min(x + y, y + x); 
} 
  
bool areEquivalent(string a, string b) 
{ 
  return (leastLexiString(a) == leastLexiString(b)); 
}  
  
// Driver Code 
int main() 
{ 
    string a = "aaba"; 
    string b = "abaa"; 
    if (areEquivalent(a, b)) 
        cout << "YES" << endl; 
    else
        cout << "NO" << endl; 
  
    // a = "aabb"; 
    // b = "abab"; 
    // if (areEquivalent(a, b)) 
    //     cout << "YES" << endl; 
    // else
    //     cout << "NO" << endl; 
    return 0; 
} 