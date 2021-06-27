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


ll n, q;
cin >> n >> q;
vector <ll> nums(n + 1);

for(ll i = 1; i <= n; i++)
    cin >> nums[i];

while(q--)
{

    ll que;
    cin >> que;

    if(que == 1)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        ll a = x - l;
        for(ll i = l; i <= r; i++)
        {
            ll val = a + i; 
            nums[i] += val * val;
        }
    }
    else if(que == 2)
    {
        ll y;
        cin >> y;
        cout << nums[y] << "\n";
    }
}
 

return 0;
}