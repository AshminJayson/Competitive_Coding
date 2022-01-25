#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start(x) int x; cin >> x; while(x--)
#define ll long long int
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
start(t)
{
    int n, m, d, D;
    cin >> n >> m >> d >> D;

    if(n * D < m || n * d > m)
    {
        cout << -1 << "\n";
        continue;
    }

    ll count = 0, j = 0;

    while(count < m)
    {
        for(int i = 1; i <= n && count < m; i++)
        {
            int c = (i + j) % n;
            if(c == 0)
            c = n;

            cout << i << " " <<  c << "\n";
            count ++;
        }

        j++;
    }
}
 
return 0;
}