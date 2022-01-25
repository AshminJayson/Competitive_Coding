#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"

lli modpower(lli a, lli b)
{
    if(b == 0)
        return 1;
    
    a = a % MOD;
    lli res = 1;

    while (b > 0)
    {
        if(b & 1)
        res = (a * res) % MOD;

        b = b >> 1;
        a = (a * a) % MOD;
    }

    return res;
    
}

int main()
{

IO;
start(){

lli n;
cin >> n;

cout << modpower(2, n - 1) << lb;
 
}
return 0;
}