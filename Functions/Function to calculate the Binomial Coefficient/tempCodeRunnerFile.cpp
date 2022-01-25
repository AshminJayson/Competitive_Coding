#include <bits/stdc++.h>
 
using namespace std;

int min(int i, int k)
{
    return (i<=k) ? i : k;
}



int binomialCoefficient(int n, int k)
{
    int arr[k+1];
    
    memset(arr,0,sizeof(arr));
    
    arr[0]=1;
   
    for(int i=1;i<=n;i++)
    {
        for(int j=min(i,k);j>0;j--)
        {
            arr[j]=arr[j]+arr[j-1];
        }
    
    }

    return arr[k];
}
 
int main()
{
int n,k;
cout<<"Enter the value of n and k to calculate the binomial coefficient of : ";
cin>>n>>k;
cout<<binomialCoefficient(n,k);
 
return 0;
}