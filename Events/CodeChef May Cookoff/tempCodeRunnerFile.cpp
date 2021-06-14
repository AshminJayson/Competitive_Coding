#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    int n,k;cin>>n>>k;
    map <int,int> chef[k];

    for(int i=0;i<n;i++)
    {
        int num;cin>>num;
        chef[i%k][num]++;
    }
    int changes=0;
    for(int i=0;i<k;i++)
    {
        int total=0,maxs=-1;
        for(auto [num,count]:chef[i])
        {
            total+=count;
            maxs=max(maxs,count);
        }
        changes+=total-maxs;
    }

    cout<<changes<<"\n";
}
 
return 0;
}