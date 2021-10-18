#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"
#define pb push_back

void solution()
{
    int x;
    cin >> x;
    lli ans = 0;

    double base = log(x) / log(2);
    lli roundbase = base;
    
    if(roundbase == base)
        ans = x;
    else if(x + 1 == pow(2, roundbase + 1))
        ans = x + 1;
    else
        ans = pow(2, roundbase);

    if(x <= 1)
        ans = x + 1;
    

    cout << ans << lb;

}
int main()
{

IO;
start(){
solution();
}
return 0;
}