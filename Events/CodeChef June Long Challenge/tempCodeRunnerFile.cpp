#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)
#define MOD 1000000007
#define ll long long int

ll modpower(ll n,ll m)
{
    ll result=1;
    while(m>0)
    {
        if(m&1)
        result=(n*result)%MOD;

        m>>1;
        n=(n*n)%MOD;
    }
    return result;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n,m;
cin>>n>>m;
ll sbitop=modpower(2,n)-1;
ll allbits=modpower(sbitop,m);
cout<<allbits<<endl;

return 0;
}