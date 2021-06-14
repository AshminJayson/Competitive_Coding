#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t){
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;

    int l1=abs(c-a);
    int l2=abs(d-b);
    int total=l1+l2;

    k-=total;
    if(k<0)
    cout<<"No\n";
    else
    {
        if(k%2==0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}
 
return 0;
}