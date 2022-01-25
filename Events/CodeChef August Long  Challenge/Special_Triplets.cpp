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

int count = 0;
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= n; j++)
    {
        if(i % j == 0)
        {
            for(int k = 0; k <= n; k++)
            {
                if(k % i == j)
                    count++;
            }
        }
    }
}

cout << count << lb;
 
}
return 0;
}