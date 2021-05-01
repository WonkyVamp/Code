#include <bits/stdc++.h>
using namespace std;
int factorial(int a)
{
	if(a==0)
		return 1;
	else if(a==1)
		return 1;
	return(a*factorial(a-1));
}
int main()
{
	int a=5;
	int x=factorial(a);
	cout << x <<endl;
}