#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int T;
cin>>T;
int n,x,k;
while(T--)
{ 
    cin>>n>>x>>k;
    if(x%(n+1)==0 || (n+1-x)%k==0)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}
 
return 0;
}
