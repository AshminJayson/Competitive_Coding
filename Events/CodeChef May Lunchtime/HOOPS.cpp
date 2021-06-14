#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1\n";
    }
    else
    cout<<n/2+1<<"\n";
}
 
return 0;
}