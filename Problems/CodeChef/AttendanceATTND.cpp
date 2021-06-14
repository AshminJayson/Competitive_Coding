#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t)
{   int n;cin>>n;
    map <string,string> name;
    map <string,int> count;
    vector <string> order;
    for(int i=0;i<n;i++)
    {
        string fname,lname;
        cin>>fname>>lname;
        order.push_back(lname);
        name[lname]=fname;
        count[fname]++;
    }

    for(int i=0;i<n;i++)
    { 
        cout<<name[order[i]]<<" ";
        if(count[name[order[i]]]>1)
        {
            cout<<order[i]<<" ";
        }
        cout<<"\n";
    }


}
 
return 0;
}