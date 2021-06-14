#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int len=0;
    
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        len+=2;
        else
        len++;
    }

    while(k--)
    {
        int q;cin>>q;q--;
        if(s[q]=='1')
        s[q]='0';
        else
        s[q]='1';

        if(q<n-1)
        {
            if(s[q]==s[q+1])len++;
            else len--;
        }
        if(q>0)
        {
            if(s[q]==s[q+1])len++;
            else len--;
        }

        cout<<len<<"\n";
    }
    

}
 
return 0;
}