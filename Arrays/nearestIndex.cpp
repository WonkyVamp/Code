#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int distance[s.length()];
	unordered_map<char,int>map;
	for(int i=0; i<s.length(); i++){
		if(i==0){
			map[s[i]]=0;
			distance[0]=-1;
		}
		else{
			auto itr = map.find(s[i]);
			if(itr != map.end()){
				distance[itr->second]=i-(itr->second);
				distance[i]=i-(itr->second);
				itr->second = i;
			}
			else{
				map[s[i]]=i;
				distance[i]=-1;
			}
		}
	}
	for(int i=0; i<s.length(); i++){
		cout << distance[i] << " " ;
	}
}