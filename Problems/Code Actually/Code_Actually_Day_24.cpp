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
int matches = 0;
start(){
int n = 3;
int count = 0;
while(n--)
{
    int x;
    cin >> x;
    if(x == 1)
        count ++;
}

if(count >= 2)
    matches++;
 
}

cout << matches << lb;

return 0;
}