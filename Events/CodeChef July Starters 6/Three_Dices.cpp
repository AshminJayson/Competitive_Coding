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

int x, y;
cin >> x >> y;
int win = x + y;

if(win >= 6)
    cout << "0\n";
else
{
    int x = 6 - win;
    cout << float(x) / float(6) << lb;
}
 
}
return 0;
}