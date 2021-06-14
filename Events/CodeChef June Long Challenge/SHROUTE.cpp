#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)
#define ll long long int
#define maximum INT_MAX


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    ll n,m;
    cin>>n>>m;
    int trains[n];
    int people[m];
    
    for(int i=0;i<n;i++)cin>>trains[i]; 
    for(int i=0;i<m;i++)cin>>people[i];
    
    
    map <int,int> conn;

    for(int i=0;i<n;i++)
    {
        if(i==0)conn[i]=0;
        else if(trains[i]!=0)
        conn[i]=0;
        else 
        conn[i]=maximum;
    }

    int fr=-1;
    for(int i=0;i<n;i++)
    {
        if(trains[i]==1)
        fr=i;

        if(fr!=-1)
        {
            if(trains[i]==0)
            conn[i]=min(conn[i],i-fr);
        }
    }

    int lleft=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(trains[i]==2)
        lleft=i;

        if(lleft!=-1)
        {
            if(trains[i]==0)
            conn[i]=min(conn[i],lleft-i);
        }
    }

    for(int i=0;i<m;i++)
    {
        int j=people[i]-1;
        if(conn[j]!=maximum)
        cout<<conn[j]<<" ";
        else
        cout<<-1<<" ";
    }

     cout<<"\n";   
}
 
return 0;
}

