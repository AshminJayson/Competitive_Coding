#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
start(t){
long x,y,a,b;
cin>>x>>y>>a>>b;
long total=ceil(a/x)+ceil(b/y);
cout<<total<<endl;
}
return 0;
}