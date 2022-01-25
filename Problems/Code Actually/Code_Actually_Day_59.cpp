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
int n;
cin >> n;

if(n <= 2)
    cout << 4 << lb;
else{
    if(n & 1)
        cout << 4 * n;
    else if(n % 4 == 0)
        cout << (n - 2) * 4 + 1;
    else
        cout << (n - 1) * 4;
}


return 0;
}