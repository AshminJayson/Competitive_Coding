#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;

    if(x==a)
    {
        if(b>y)
        cout<<"up\n";
        else
        cout<<"down\n";
    }
    else if(y==b)
    {
        if(a>x)
        cout<<"right\n";
        else
        cout<<"left\n";
    }
    else
    cout<<"sad\n";
}
 
return 0;
}