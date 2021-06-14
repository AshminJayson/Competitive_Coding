#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)
#define MOD 1000000007 // const int MOD = 1000000007 
#define ll long long int

ll modpower(ll n,ll m)
{
    ll result=1;
    n=n%MOD;
    while(m>0)
    {
        if(m&1)
        result=(n*result)%MOD;

        m=m>>1;     
        n=(n*n)%MOD;
    }
    return result;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    ll n,m;
    cin>>n>>m;
    ll sbitop=modpower(2,n)-1;
    cout<<modpower(sbitop,m)<<endl;
}
return 0;
}