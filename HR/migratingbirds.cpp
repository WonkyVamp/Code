#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int n,input;
	cin >> n;
	std::vector<int> v;
	int ctr[5]={0};
	for( int i=0; i<n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i]==1)
			ctr[0]++;
		if(v[i]==2)
			ctr[1]++;
		if(v[i]==3)
			ctr[2]++;
		if(v[i]==4)
			ctr[3]++;
		if(v[i]==5)
			ctr[4]++;
	}
	// sort(ctr, ctr+5, greater<int>()); 
	// cout << "Array after sorting : \n"; 
 //    for (int i = 0; i < 5; ++i) 
 //        cout << ctr[i] << " "; 
	for (int i = 0; i < 5; ++i)
	{
		if(ctr[i]==ctr[i+1])
			for (int j = 0; j < v.size(); ++j)
			{
				max=v[]
			}
	}
  
}