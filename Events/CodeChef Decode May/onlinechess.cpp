#include <bits/stdc++.h>

 
using namespace std;
 
int score(string s, int n)
{
    int score=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='W')
        {
            score+=1;
            if(i>0)
            { 
                if(s[i-1]=='W')
                score+=1;
            }
        }
    }
    
    return score;
}


int combinations(string s, int n, int k)
{
    int fdefeat;
    int ldefeat;
    int flag=0;
    for(int i=0;i<n;i++)
    {   
        if(s[i]=='L')
        {
            if(flag==0)
            {
                fdefeat=i;
                flag=1;
            }

            ldefeat=i;
        }
    }

    int maxscore=0;
    int currscore=0;
    for(int i=fdefeat;i<n;i++)
    {   
        if(s[i]=='L')
        {
            string temp=s;
            int j=i;
            int ktemp = k;
            while(j<=ldefeat)
            {
                if(temp[j]=='L' && ktemp>0)
                {
                    temp[j]='W';
                    ktemp--;
                    currscore=score(temp,n);
                    if(ktemp==0)
                    {
                        if(j!=ldefeat)
                        {
                            temp[j]='L';
                            ktemp++;
                        }
                    
                    }
                }
                j++;
                if(currscore>maxscore)
                maxscore=currscore;
             
            }
        }
    }

    return maxscore;
}




int main()
{
int t;
cin>>t;

while(t--)
{   
    int n,k;
    string s;
    cin>>n>>k>>s;
    cout<<combinations(s,n,k)<<"\n";

}
 
return 0;
}