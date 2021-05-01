#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	std::map<int, std::map<int,int> > m; // make sure there is space between > > 
	std::map<int, std::map<int,int> >::iterator itr;
	std::map<int,int>::iterator it;
	for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) { 
            m[i][j] = i + j; 
        } 
    }
    cout << m.size(); 
    for(itr=m.begin(); itr!=m.end();itr++)
    {
    	for(it=itr->second.begin(); it !=itr->second.end(); it++)
    	{
    		cout << "First :" << itr->first << endl;
    		//cout << "Second :" << itr->second << endl; this doesn't just exist aise hee
    		cout << "First of second of map :" << it->first << endl;
    		cout << "Second of second of map :" << it->second << endl ;
    	}
    }

}