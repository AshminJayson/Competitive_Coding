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

lli n;
cin >> n;
lli s1 = UINT_MAX, s2 = UINT_MAX;
lli l1 = 0, l2 = 0;
lli x;
for(int i = 0; i < n; i++){
    cin >> x;
    s1 = min(s1, x);
    l1 = max(l1, x);    
}
for(int i = 0; i < n - 1; i++){
    cin >> x;
    s2 = min(s2, x);
    l2 = max(l2, x);
}


s2 -= s1;
l2 -= l1;


if(s2 == l2)
{
    cout << s2 << lb;
    continue;
}

if(n >= 2)
{
    if(s2 <= 0)
        cout << l2 << lb;
    else if(l2 <= 0)
        cout << s2 << lb;
    else
        cout << min(s2, l2) << lb;
    
    continue;
}

 
}
return 0;
}