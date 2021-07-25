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

int n;
cin >> n;
int sum = 0;

for(int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    sum += x;
}

if(sum == n)
    cout << "0" << lb;
else if(sum < n)
{
    cout << "1" << lb;
}
else
{
    cout << sum - n << lb;
}
}
return 0;
}