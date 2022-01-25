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
int n, q;
cin >> n >> q;
vector <int> a(n);
for(auto &x : a)
    cin >> x;

vector <int> odds(n, 0);
vector <int> evens(n, 0);

for(int i = 0; i < n; i++)
{
    if(i > 0)
    {
        if(a[i] % 2 == 0)
        {
            evens[i] = evens[i - 1] + 1;
            odds[i] = odds[i - 1];
        }
        else
        {
            odds[i] = odds[i - 1] + 1;
            evens[i] = evens[i - 1];
        }
    }
    else
    {
        if(a[i] % 2 == 0)
            evens[i]++;
        else
            odds[i]++;
    }
}

// for(int i = 0; i < n; i++)
//     cout << evens[i] << " ";
// cout << lb;
// for(int i = 0; i < n; i++)
//     cout << odds[i] << " ";

while(q--)
{
    int l, r;
    cin >> l >> r;
    l--; r--;
    int to = odds[r] - odds[l];
    int te = evens[r] - evens[l];
    
    if(a[l] % 2 == 0)
        te++;
    else
        to++;



}
 
}
return 0;
}