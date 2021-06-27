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
start(){
int a, b, c, d;
cin >> a >> b >> c >> d;
if(a + c == 180)
{
    if(b + d == 180)
    cout << "YES\n";
    else
    cout << "NO\n";
}
else
cout << "NO\n";
 
}
return 0;
}