#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n"

int main()
{

IO;
start()
{
    int n;
    cin >> n;
    vector <int> a(n);
    int h = 7.5 *  pow(10, 5);
    vector <int> dp(h,0);  
    vector <bool> poss(h, 0);
    for(auto &x : a)
    {    
        cin >> x;
        dp[x] = 1; 
        poss[x] = 1;
    }

    sort(a.begin(),a.end());
    
    int total = 0;
    for(int i = 0; i < n ;i++)
    {
        int iter = a[i] * 2;
        int stat = a[i];

        while(iter <= a.back())
        {
            if(poss[iter])
            {
                dp[iter] += dp[stat];
                dp[iter] %= MOD;
            }
            iter += stat;
        }

        total += dp[stat];
        total %= MOD;
    }

    cout << total << lb;
}
 
return 0;
}

 