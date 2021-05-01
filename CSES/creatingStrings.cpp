#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
void permute(string str) 
{ 
    sort(str.begin(), str.end()); 
    do { 
       cout << str << endl; 
    } while (next_permutation(str.begin(), str.end())); 
} 
ll factorial(int n)
{
	if( n==1)
		return 1;
	return n*factorial(n-1);
}
int main()
{
	string s;
	cin >> s;
	std::map<char, int> map;
	for ( int i=0; i<s.size(); i++ )
		map[s[i]]++;
	ll x= factorial(s.size());
	for( auto it=map.cbegin(); it!=map.cend(); ++it)
	{
		if( it->second >1)
			x=x/factorial(it->second);
	}
	cout << x << endl;
	permute(s);
}