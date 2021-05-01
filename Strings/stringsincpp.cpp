#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string s1="Hello";
	string s2="yum";
	string s3(1, s1[0]);
	cout << s3;
}