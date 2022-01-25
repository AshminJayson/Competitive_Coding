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

int r1, w1, c1, r2, w2, c2;
cin >> r1 >> w1 >> c1;
cin >> r2 >> w2 >> c2;

int ca = 0;
int cb = 0;
if(r1 > r2)
    ca++;
else
    cb++;
if(w1 > w2)
    ca++;
else
    cb++;
if(c1 > c2)
    ca++;
else
    cb++;

if(ca > cb)
    cout << "A\n";
else
    cout << "B\n";
}

return 0;
}