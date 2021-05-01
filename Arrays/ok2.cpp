#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(){
	vector<string> v;
	for(int i=0; i<3; i++){
		string x;
		v.push_back(x);
	}
	map<char,int>m;
	int x=0;
	for( int i=0; i<v.size(); i++){
		for(int j=0; j<v[i].size(); j++){
			map[v[i][j]]++;
		}
		
	}
}