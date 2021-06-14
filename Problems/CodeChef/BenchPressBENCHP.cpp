#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{   
    int n,wi,r;
    cin>>n>>wi>>r;
    int w[n];
    for(int i=0;i<n;i++)cin>>w[i];

    sort(w,w+n);
    int total = r;
    int i=0;
    while(i<n)
    {   int count =1;
        int j=i+1;
        while(j<n)
        {
            if(w[j]!=w[i])
            break;
            else
            {
                count++;
                j++;
            }
        }
        if(count>1)
        {
            total+=count*w[i];
            if(count%2!=0)
            total-=w[i];
            if(total>=wi)
            break;
        }

        i=j;

    }
    
    if(total>=wi)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}
 
return 0;
}