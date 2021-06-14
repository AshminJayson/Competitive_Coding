#include <bits/stdc++.h>
 
using namespace std;
 
int arr[1001][1001];

void precompute()
{

    for(int i=1;i<=1000;i++)
    {
        arr[i][1]=i*(i+1)/2;
        for(int j=2;j<=1000;j++)
        {
            arr[i][j]=arr[i][j-1]+(i-1)+(j-1);
        }
        
    }
}

int main()
{
precompute();
int t;
cin>>t;

while(t--)
{   
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int sum=0;

    for(int i=x1;i<=x2;i++)
    {
        sum+=arr[i][y1];
    }
    for(int i=y1+1;i<=y2;i++)
    {
        sum+=arr[x2][i];
    }

    cout<<sum<<"\n";
} 
return 0;
}