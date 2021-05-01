#include <bits/stdc++.h>
#include <string>
using namespace std;
void removeDuplicates(char* S) 
{ 
    // When string is empty, return 
    if (S[0] == '\0') 
        return; 
  
    // if the adjacent characters are same 
    if ((S[0] == 'L'|S[0]=='R') && (S[1]=='L' | S[1]=='R')) { 
          
        // Shift character by one to left 
        int i = 0;  
        while (S[i] != '\0') { 
            S[i] = S[i + 1]; 
            i++; 
        } 
        removeDuplicates(S); 
    }
    else if ((S[0] == 'U' | S[0] =='D') && (S[1]=='U' | S[1]=='D')) { 
          
        // Shift character by one to left 
        int i = 0;  
        while (S[i] != '\0') { 
            S[i] = S[i + 1]; 
            i++; 
        } 
        removeDuplicates(S); 
    } 
    removeDuplicates(S + 1); 
} 
void reverses( char* S, int m)
{
	for (int i=0, j=m-1; i<j; i++,j--) 
        swap(S[i], S[j]);  
     
}
int main()
{
	vector<int> v1;
	vector<int> v2;
	int t;
	cin >> t;
	for( int j=0; j<t; j++)
	{
		int x=0,y=0;
		int n;
		cin >> n;
		char s1[n];
		cin >> s1;
		reverses(s1,n);
		removeDuplicates(s1);
		//cout << s1;
		for ( int i=0; i<n; i++)
		{
			if(s1[i]=='L')
				x=x-1;
			else if(s1[i]=='R')
				x=x+1;
			else if(s1[i]=='U')
				y=y+1;
			else if(s1[i]=='D')
				y=y-1;
			else 
				break;
		}
		v1.push_back(x);
		v2.push_back(y);
	}
	for( int i=0; i<t; i++)
	{
		cout << v1[i] << " " << v2[i] << endl;
	}
}