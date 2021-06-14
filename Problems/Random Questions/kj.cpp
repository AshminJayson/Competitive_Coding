#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    string s,t;
    cin>>s>>t;

    vector <pair<char,int> > s1;
    int s2=-1;
    vector <pair<char,int> > t1;
    int t2=-1;

    for(int i=0;i<s.length();i++)
    {
        s1.push_back(make_pair(s[i],1));
        s2++;
        int j=i+1;
        while(s[j]==s[i])
        {
            s1[s2].second++;
            j++;
        }
        i=j-1;
    }

    for(int i=0;i<t.length();i++)
    {
        t1.push_back(make_pair(t[i],1));
        t2++;
        int j=i+1;
        while(t[j]==t[i])
        {
            t1[t2].second++;
            j++;
        }
        i=j-1;
    }

    bool flag=true;
    if(s1.size()!=t1.size())
    {
        cout<<"No\n";
        flag=false;
    }
    else 
    {
        for(int i=0;i<s1.size();i++)
        {
            if(s1[0].first!=t1[0].first)
            {
                cout<<"No\n";
                flag=false;
                break;
            }
        }
    }
    
    if(flag==true)
    cout<<"Yes\n";
}
return 0;
}