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
start()
{
    int n;
    cin >> n;
    vector <int> a(n),o,e;

    for(auto &x : a)
    {
        cin >> x;
        if(x % 2 == 0)
        e.push_back(x);
        else
        o.push_back(x);
    }
    
    sort(e.begin(),e.end());
    sort(o.begin(),o.end(), greater <int> ());
    for(auto x : e)
        cout << x << " ";
    for(auto x : o)
        cout << x << " ";

    cout << lb;
} 
return 0;
}