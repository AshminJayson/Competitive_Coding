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
    int n, m;
    cin >> n >> m;

    int ones = 0;
    string s;
    
    while(n--)
    {
        cin >> s;
        for(int i = 0; i < m; i++)
        if(s[i] == '1') ones++;    
    }

    if(ones % 2 == 0)
    cout << "NO\n";
    else
    cout << "YES\n";
}
 
return 0;
}
