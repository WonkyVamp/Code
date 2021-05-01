#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int n,marks;
	int k=0;
	int arr[60]={0};
	cin >> n;
	for( int j=0; j<n; j++)
	{
		cin >> marks;
		if(marks<38)
		{
			arr[k]=marks;
			// cout << arr[k] << endl;

			k++;
		}
		else
		{
			for(int i=40; i<=100; i=i+5)
			{
				if(marks>i)
					continue;
				else if((i-marks)<3)
				{
					marks=i;
					arr[k]=marks;
					// cout << arr[k] << endl;
					k++;
					break;
				}
				else
				{
					arr[k]=marks;
					// cout << arr[k] << endl;
					k++;
					break;
				}
			}
		}
	}

	
	for( int i=0; i<k;i++)
		cout << arr[i] << endl;
}