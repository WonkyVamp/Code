                   /* Length of longest Substring */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

 ll i,j;
 
   int main()
   {
      ll t;
       cin>>t;
       
          while(t--)
          {
              string s;
               cin>>s;
               
                 set<char>st;
                   st.clear();
                 
                ll start=0, end=0, ans=0, count;
                
                map<char,ll>mp;
                 mp.clear();
                 
                 ll n = s.length();
                
                     while(end<n)
                   {
                       if(mp.find(s[end])!=mp.end())
                       {
                           start=max(mp[s[end]]+1, start);
                       }
                          
                          mp[s[end]]=end;
                          
                          ans=max(ans,(end-start+1));
                          
                          end++;
                   }
                 
                 cout<<ans<<endl;
          }
   }
   
   // T.E. = O(N)
   // S.E = O(n)