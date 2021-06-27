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
int l, h;
cin >> l >> h;
string s;
cin >> s;

int a = 0, b = h;
bool cs = false;
for(int i = 0; i < l; i++)
{
    if(s[i] == '0')
        a++;
    else if(s[i] == '1' && a != 0)
    {
        if(a == h)
            cs = true;
        
        b = 2 * (b - a);
        a = 0;
    }
}
if(a == h)
cs = true;


if(cs)
{
    cout << "YES\n";
    continue;
}

if(a != 0)
{
    b = 2 * (b - a);
}

if(b <= 0)
cout << "YES\n";
else
cout << "NO\n";

 
}
return 0;
}