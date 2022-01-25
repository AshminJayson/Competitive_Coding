#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n,k;
cin>>n>>k;
vector <int> time(n);
int i=0;
for(auto &x : time)
    cin >> x;

int maxTime=0;

sort(time.begin(), time.end());

for(i=0;i<n-1;i++)
{
        if(k <=time[i+1]-time[i])
        maxTime+=k;
        else
        maxTime+=time[i+1]-time[i];
}

maxTime+=k;
cout<<maxTime<<"\n";

return 0;
}
