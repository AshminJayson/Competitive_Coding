#include <bits/stdc++.h>

using namespace std; 
#define start(x) int x;cin>>x;while(x--);

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long a,c,n;
        cin>>a>>c>>n;
        cout<<a*pow(c,n-1)<<"\n";
        
    }
    return 0;
}