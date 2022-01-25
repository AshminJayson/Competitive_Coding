#include <bits/stdc++.h>
 
using namespace std;

int min(int i, int k)
{
    return (i<=k) ? i : k;
}

int binomialCoefficient( int n, int k)
{
    int arr[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,k);j++)
        {
            if(j==0 | j==i)
            arr[i][j]=1;
            else
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    return arr[n][k];
}
 
int main()
{
int n,k;
cout<<"Enter the value of n and k to calculate the binomial coefficient of : ";
cin>>n>>k;
cout<<binomialCoefficient(n,k);
 
return 0;
}