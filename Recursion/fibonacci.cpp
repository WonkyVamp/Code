#include <bits/stdc++.h>
using namespace std;
//n fibonacci numbers
int F[51];
void fib(int a, int b, int n)
{
	if(n==0)
		return;
	int c=a+b;
	cout << c;
	//ctr++;
	return fib(b,c,n-1);
}
//fibonacci numbers till n
void fib1(int a, int b, int n)
{
	if(n==0)
		return;
	if(n==1)
		return;
	int c=a+b;
	if(c > n)
		return;
	cout << c;
	fib1(b,c,n);
}
//nth fibonacci number
int fib2(int n)
{
	if(n<=1)
		return n;
	if( F[n] !=-1 )
		return F[n];
	return fib2(n-1) + fib2(n-2);
	return F[n];
}
int main()
{
	for( int i=0;i<51; i++)
		F[i]=-1;
	int n=10;
	//cout << 0 << 1;
	//fib1(0,1,n);
	int x=fib2(n);
	cout << x;
}