#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    cin >> t;
    vector<int>v;
    for( int i=0; i<t; i++ )
    {
        int a,b;
        cin >> a >> b;
        string str1,str2,str3,str4;
        str1=to_string(a);
        str2=to_string(b);
        if(a<10)
        {
            str1='0'+str1;
        }
        if(b<10)
        {
            str2='0'+str2;
        }
        int min=a+b;
        int x=0;
        int y=0;
        str3=str1;
        str4=str2;
        for( int k=0; k<4; k++)
        {
            swap(str1[x],str2[y]);
            int m=stoi(str1);
            int n=stoi(str2);
            int sum=m+n;
            min=max(sum,min);
            if(y==0)
            {
                swap(str1[x],str2[y]);
                y++;
            }
            else if(x==0 & y !=0)
            {
               swap(str1[x],str2[y]); 
                x++;
                y--;
            }
        }
        v.push_back(min);
    }
    for( int i=0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }
}