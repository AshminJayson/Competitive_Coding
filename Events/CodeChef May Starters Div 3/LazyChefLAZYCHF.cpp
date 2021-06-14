#include <bits/stdc++.h>

using namespace std;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t,x,m,d;
cin>>t;
while(t--)
{
    cin>>x>>m>>d;
    cout<<min(m*x,d+x)<<"\n";
}
 
return 0;
}