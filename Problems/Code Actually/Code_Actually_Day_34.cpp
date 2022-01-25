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

int ashx, ashy, pokx, poky, holex, holey;
cin >> ashx >> ashy >> pokx >> poky >> holex >> holey;

if(ashx == pokx)
{
    int llimit = min(poky, ashy);
    int mlimit = max(poky, ashy);
    if(holex != pokx)
    cout << abs(poky - ashy) << lb;
    else if(holey < llimit || holey > mlimit)
    cout << abs(poky - ashy) << lb;
    else
    cout << abs(poky - ashy) + 2 << lb;
}
else if(ashy == poky)
{
    int llimit = min(pokx, ashx);
    int mlimit = max(pokx, ashx);
    if(holey != poky)
        cout << abs(pokx - ashx) << lb;
    else if(holex < llimit || holex > mlimit)
        cout << abs(pokx - ashx) << lb;
    else
    cout << abs(pokx - ashx) + 2 << lb;
}
else
{
    int pathlength = 0;
    pathlength += abs(pokx - ashx);
    pathlength += abs(poky - ashy);
    cout << pathlength << lb;
}

}
return 0;
}