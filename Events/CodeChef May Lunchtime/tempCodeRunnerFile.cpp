//optimal solution

#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

start(t){
    int n,k;
    cin>>n>>k;
    vector <int> arr(n);
    
    for(auto &x : arr)cin>>x;

    sort(arr.begin(),arr.end());

    int s1=0;
    int s2=0;

    while(k--)
    {
        s1+=arr.back(); arr.pop_back();
        s2+=arr.back(); arr.pop_back();
        
    }

    s2+=arr.back();
    cout<<max(s1,s2)<<"\n";
}

 
return 0;
}


//MY solution
// #include <bits/stdc++.h>
 
// using namespace std;
 


// int main()
// {

// long t;
// cin>>t;
// while(t--)
// {
//     long n,k;
//     cin>>n>>k;
//     long arr[n+1];
//     for(long i=1;i<=n;i++)
//     { 
//         cin>>arr[i];
//     }

//     long famt=0;
//     long lamt=0;

//     for(long i=1;i<=k*2;i++)
//     {
//         long max=0;
//         long ptn=0;
//         for(long j=1;j<=n;j++)
//         {
//             if(arr[j]>=max)
//             {
//             max=arr[j];
//             ptn=j;
//             }
//         }

//         if(i%2!=0)
//         famt+=max;
//         else
//         lamt+=max;

//         arr[ptn]=0;

//         if(i==k*2)
//         {
            
//             max=0;
//             ptn=0;
//             for(long j=1;j<=n;j++)
//             {
//             if(arr[j]>=max)
//             {
//             max=arr[j];
//             ptn=j;
//             }
//             }
//             lamt+=max;
//             break;
//         }



//         arr[ptn]=0;

//     }

    

//     if(famt>=lamt)
//     cout<<famt<<"\n";
//     else
//     cout<<lamt<<"\n";
 

 
// }
 
// return 0;
// }