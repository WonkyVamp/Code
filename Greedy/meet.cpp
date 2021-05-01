#include <bits/stdc++.h>

using namespace std;

int maxMeetings(int *, int *, int);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        int ans = maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}// } Driver Code Ends


int maxMeetings(int start[], int end[], int n) {
    // Your code here
    vector<pair<int, pair <int, int>>> v;
    for(int i=0; i<n; i++){
        v.push_back(make_pair(i+1, make_pair(end[i],start[i])));
    }
    sort(v.begin(), v.end());
    int ctr =1, j=0;
    for(int i=1; i<n; i++){
        // if(v[i].second.second == v[j].second.second){
        //     j = min(v[i].first, v[j].first);
        // }
        cout << v[i].second.second << ": " <<v[j].second.first <<  endl;
         if( v[i].second.second>v[j].second.first){
            cout << v[i].second.second << endl;
            ctr++;
            j = i;
        }
    }
    return ctr; 
}