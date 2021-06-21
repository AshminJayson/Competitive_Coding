#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
start()
{
    int x, y, z, a, b, c;
    cin >> x >> a >> y >> b >> z >> c;

    if(a >= x)
    {
        if(b >= y)
        {
            if(c <= z)
            cout << "YES\n";
            else
            cout << "NO\n";
        }
        else
        cout << "NO\n";
    }
    else
    cout << "NO\n";
}
 
return 0;
}