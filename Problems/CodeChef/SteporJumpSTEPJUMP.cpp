#include <bits/stdc++.h>
 
using namespace std;
 
int n;


int main()
{
int t;
cin>>t;

while(t--)
{
    cin>>n;
    int board[n+1][n+1]={0};
    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=n;j++)
        { 
            cin>>board[i][j];
        }
    }

    int w=0;
    int h=0;

    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=n;j++)
        { 
            if(board[i][j]==1)
            {
                if(j == n)
                {
                    if(board[i-1][j]==0 && board[i-1][j-1]==0)
                    h++;
                }
                else
                {
                    if(board[i-1][j]==0 && board[i-1][j-1]==0 && board[i-1][j+1]==0)
                    h++;
                }
            }
            else
            h=0;

            if(h==2)
            {
                w=1;
                break;
            }
        }


    }
    
    if(w==1)
    cout<<"No\n";
    else
    cout<<"Yes\n";
}


 
return 0;
}