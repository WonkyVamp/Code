#include <bits/stdc++.h>
using namespace std;
vector<int> climbingScoreboard(int s, int scores[], int x, int trial[]) 
{
    vector<int> res;
    unordered_map<int,int>map;
    map[scores[0]]=1;
    int ctr=1;
    for(int i=1; i<s; i++){
        if(scores[i]==scores[i-1]){
            map[scores[i]]=ctr;
            continue;
        }
        ctr++;
        map[scores[i]]=ctr;
    }
    int i=0;
    int j=s-1;
    while(i<x && j>=0){
      if(trial[i]>scores[j])
        j--;
    else if(trial[i]<scores[j]){
        if(i==0)
            res.push_back(map[scores[j]]+1);
        else
            res.push_back((min(map[scores[j]]+1,res[i-1])));
        i++;
    }
    else if(trial[i]==scores[j]){
        if(i==0)
            res.push_back(map[scores[j]]);
        else
            res.push_back((min(map[scores[j]],res[i-1])));
        i++;
        }
    }
    if(j==-1 && i!=x){
        res.push_back(1);
        i++;
        while(i<x){
            res.push_back(1);
            i++;
        }
    }
    return res;
}
int main()
{
    int scores_count,trial_count;
    cin >> scores_count;
    int scores[scores_count];
    for(int i=0; i<scores_count; ++i)
    {
        cin>>scores[i];
    }
    cin >> trial_count;
    int trial[trial_count];
    for(int i=0; i<trial_count; ++i)
    {
        cin>>trial[i];
    }
    vector<int> rank = climbingScoreboard(scores_count,scores,trial_count,trial);
    for(int i=0; i<trial_count-1;++i )
    {
        cout<<rank[i]<<" ";
    }
    cout<<rank[trial_count-1];
    return 0;
}