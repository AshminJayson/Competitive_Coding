#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n,k;
cin>>n>>k;
int time[n];
int i=0;
for(i=0;i<n;i++)
{
    cin>>time[i];
}

int maxTime=0;

sort(time,time + n);
for(i=0;i<n-1;i++)
{
        if(k<=time[i+1]-time[i])
        maxTime+=k;
        else
        maxTime+=time[i+1]-time[i];
}

maxTime+=k;
cout<<maxTime<<"\n";

return 0;
}
