#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) long long int x;cin>>x;while(x--)
#define ll long long int

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t){
    ll D,d,P,Q;
    cin>>D>>d>>P>>Q;
    ll incr=D/d;
    ll days=(2*P+(incr-1)*Q)*incr;
    days/=2;
    ll total=d*days;
    total+=(P+incr*Q)*(D%d);
    cout<<total<<"\n";
}
 
return 0;
}