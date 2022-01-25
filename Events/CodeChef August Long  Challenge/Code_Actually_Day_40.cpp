#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"
#define ll long

int main()
{

IO;
ll n, m;
cin >> n >> m;

bool flag = true;
int days = 0;

if(n >= m)
    flag = false;

while(flag)
{
    days++;

    n *= 3;
    n *= 2;
    n += 5;

    if(n >= m)
        flag = false;
}

cout << days;

return 0;
}