#include <bits/stdc++.h>
 
using namespace std;
 



int main()
{

long a,b;
cin>>a>>b;
long temp=a;
int count=0;

while(temp<b)
{
    temp*=2;
    count++;
}

cout<<count<<"\n";

return 0;
}