#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t){
    int n,k,f;
    cin>>n>>k>>f;
    vector < pair<int,int> > timings;
    for(int i=0;i<n;i++)
    { 
        int a,b;
        cin>>a>>b;
        timings.push_back(make_pair(a,b));
    }

    sort(timings.begin(),timings.end());

    int freetime=0;
    int maxtime=0;

    for(int i=0;i<n;i++)
    {
        if(timings[i].first>maxtime)
        freetime+=timings[i].first-maxtime;
        maxtime=max(timings[i].second,maxtime);
    }

    freetime+=f-maxtime;
    if(freetime>=k)
    cout<<"Yes\n";
    else
    cout<<"No\n";

    }
 
return 0;
}