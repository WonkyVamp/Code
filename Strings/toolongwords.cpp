#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string toolong(string s1)
{
	string first(1,s1[0]);
	string last(1,s1[(s1.length()-1)]);
	int m=(s1.length()-2);
	stringstream ss;
	ss << m;
	string s4;
	ss >> s4;
	string s3;
	s3.append(first);
	s3.append(s4);
	s3.append(last);
	return s3;
	
}
int main()
{
	//int p=0;
	unsigned int n;
	cin >> n;
	
	string arr[n];
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i].length()>10)
		{
			s[i]=toolong(arr[i]);
		}
		else
		{
			s[i]=arr[i];
		}
		
		
	}
	for(int j=0;j<n;j++)
	{
		cout << s[j] << "\n";
	}
}