#include <iostream>
#include <string>
using namespace std;
#include <sstream>

int main()
{
    int t,n;
    cin >> t;
    int ctr=0;
    int arr[t][n];
    for(int i=0;i<t;i++)
    {
        //int n;
        cin >> n;
        
        
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];

        }
        
    }
    int a,b,f,ctr=0;

    for(int l1=0;l1<t;l1++)
    {
        int n1=arr1[l1].length();
        string s[n1];
    for(int k=0;k<n1;k++)
        {

            ctr=0;
            f=k;
            //cout << f;
            a=arr1[t][f];
            while(arr1[t][f+1]=arr1[t][f]+1)
            {
                b=arr1[t][f+1];
                ctr++;
                f++;
            }
            //cout << ctr;
            if(ctr>1)
            {
                stringstream ss1;
                ss1 << a;
                string s1;
                ss1 >> s1;
                stringstream ss2;
                ss2 << a;
                string s2;
                ss2 >> s2;
                s[k]=s1+"..."+s2;
            }
            else
            {
                s[k]=a;
            }
        }
    
    for(int e=0;e<100;e++)
        {
            cout << s[e] << ',';
        }
    }
    
}
