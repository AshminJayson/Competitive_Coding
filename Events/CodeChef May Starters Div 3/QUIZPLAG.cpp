#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{   
    int n,m,k;
    cin>>n>>m>>k;
    int list[k];
    for(int i=0;i<k;i++)
    { 
        cin>>list[i];
    }   

    int firstadm=n+1;
    int lastadm=n+m;

    if(k==1)
    {
        cout<<"0\n";
        continue;
    }
    sort(list,list+k);

    int losers[k];
    int vpos=0;
    
    for(int i=0;i<k;i++)
    {
        if(list[i]<=n)
        {
            if(list[i]==list[i+1])
            {
                if(list[i]!=losers[vpos])
                {
                    vpos++;
                    losers[vpos]=list[i];
                    
                }

            }
        }
        else
        break;
    }

    cout<<vpos<<" ";

    for(int i=1;i<=vpos;i++)
    {
        cout<<losers[i]<<" ";
    }
 
    cout<<"\n";
 
}

 
return 0;
}