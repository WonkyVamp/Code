#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n[10][10];
	int v;
	scanf("%d", &v);
	for(int i=0; i<v; i++)
	{
		for(int j=0; j<v; j++)
			n[i][j]=0;
	}
	//edges
	int src, dest;
	int ch=1;
	while(ch)
	{
		scanf("%d%d", &src, &dest);
		n[src][dest]=1;
		n[dest][src] = 1;
		printf("Enter edge");
		scanf("%d", &ch);
	}
	for(int i=0; i<v; i++)
	{
		for(int j=0; j<v; j++)
			printf("%d", n[i][j]);
		printf("\n");
	}

}