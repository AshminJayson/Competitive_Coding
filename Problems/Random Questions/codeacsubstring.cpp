#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{
    int l;
    string word;
    cin>>l>>word;
    int top=0;

    for(int i=0;i<l;i++)
    {
        vector <char> sub;
        vector <char> :: iterator it;
        for(int j=i;j<l;j++)
        {   
            it=find(sub.begin(),sub.end(),word[j]);
            if(it==sub.end())
            {
                sub.push_back(word[j]);
            }
            else
            break;
        }
        int temp=sub.size();
        top=max(top,temp);
    }

    cout<<top<<"\n";
}
 
return 0;
}