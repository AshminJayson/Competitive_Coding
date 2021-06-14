#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
 int k;
 cin>>k;
 string s[k];
 for(int i=0;i<k;i++)
 {
     cin>>s[i];
 }

 int flag=0;
 for(int i=0;i<k;i++)
 {
    flag=1;
    if(s[i][0]<91 && s[i][0]>77)
    {
    for(int j=0;j<s[i].length();j++)
    {
        if(s[i][j]<=77 || s[i][j]>=91)
        {
            flag=0;
            break;
        }
    }
    }
    else if(s[i][0]<110 && s[i][0]>96)
    {
       for(int j=0;j<s[i].length();j++)
        {
        if(s[i][j]<97 || s[i][j]>109)
        {
            flag=0;
            break;
        }

        } 
    }
    else
    {
        flag=0;
        break;
    }
    
    if(flag==0)
    break;


 }
     if(flag==0)
    cout<<"No\n";
    else
    cout<<"Yes\n";
}
 
return 0;
}