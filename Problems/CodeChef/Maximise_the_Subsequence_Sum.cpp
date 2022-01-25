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

int n, k;
cin >> n >> k;
vector <int> a(n);
int sum = 0;

for(auto &x : a)
{
    cin >> x;
    if(x >= 0)
        sum += x;
}

sort(a.begin(), a.end());

int i = 0;
while(i < n && a[i] < 0 && k--)
{
    sum += (-1 * a[i]);
    i++;
}

cout << sum << lb;

 
}
return 0;
}