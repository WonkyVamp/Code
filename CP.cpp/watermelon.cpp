#include <iostream>
using namespace std;
int main()
{
	signed int w;
	cin >> w;
	if(w>2 and w%2==0)
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
}