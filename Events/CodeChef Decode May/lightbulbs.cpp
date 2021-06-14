#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n;
cin>>n;
int state[n];

for(int i=0;i<n;i++)
cin>>state[i];

int count=0;
for(int i=0;i<n;i++)
{
    if(count%2==0)
    {
        state[i]=state[i];
    }
    else{
        if(state[i]==0)
        state[i]=1;
        else
        state[i]=0;
    }

    if(state[i]!=1)
    {
        count++;
    }
}
 
cout<<count;
return 0;
}