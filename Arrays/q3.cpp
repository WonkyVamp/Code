#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int count = 0;
	for(int i = 0; i<=a; i+=11){
		string str1 = "", str2 = "";
		string y = to_string(i);
		if(i ==0 || y.length() %2 != 0 )
			continue;
		for(int k = 0; k<y.length()/2; k++)
			str1 += y[k];
		for(int k = y.length()/2; k<y.length(); k++)
			str2 += y[k];
		if(str1.compare(str2) == 0){
			count = count +1;
		}
	}
	cout << count;
}