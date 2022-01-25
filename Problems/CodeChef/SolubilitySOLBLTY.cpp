#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int T;
cin>>T;

while(T--)
{
    int X,A,B;
    cin>>X>>A>>B;

    cout<<(A+(100-X)*B)*10;
}

return 0;
}