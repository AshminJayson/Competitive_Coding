#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s,t,u,v,w;
s="ecotype";
t="ecology";
u="ecocide";
v="ecotope";
w="ecotone";
map <char,int> csort;
string :: iterator it;
 
for(int i=0;i<7;i++)
{
   it=find(t.begin(),t.end(),s[i]);
   if(it!=t.end())
   {
       it=find(u.begin(),u.end(),s[i]);
       if(it!=u.end())
       {
           it=find(v.begin(),v.end(),s[i]);
           {
               if(it!=v.end())
               {
                   it=find(w.begin(),w.end(),s[i]);
                   if(it!=w.end())
                   {
                       csort[s[i]]++;
                   }
               }
           }
       }
   }
    
}

for(auto lt =csort.rbegin();lt!=csort.rend();lt++)
{
    cout<<lt->first<<"\n";
}

return 0;
}