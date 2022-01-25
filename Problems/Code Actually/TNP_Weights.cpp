#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"

int main()
{

IO;
start(){

lli n, k;
cin >> n >> k;
map <lli, lli> a[k];

for(lli i = 0; i < n; i++)
{
    lli inp;
    cin >> inp;
    a[i % k][inp]++;
}

lli count = 0;  

for(lli i = 0; i < k; i++)
{
    lli total = 0, curr_max = INT_MIN;
    for(auto x : a[i])
    {
        total += x.second;
        curr_max = max(curr_max, x.second);
    }

    count += total - curr_max;
}
 
    cout << count << lb;
}
return 0;
}