#include <bits/stdc++.h>
 
using namespace std;


 
int main()
{
int T;
cin>>T;
while(T>0)
{
    
    int p,g;
    cin>>g>>p;
    int people[10];
    int upto=0;
    for(int i=0;i<10;i++)
    {
        cin>>people[i];
        if(i+1>g)
        upto+=people[i];

    }
    
     cout<<(upto+1)/p<<" "<<ceil((upto+people[g-1])/p);
     cout<<"\n";
     T=T-1;
     } 
return 0;
}