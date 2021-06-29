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
int n;
cin >> n;


for(int i = 1; i <= n; i++)
{
    int blank = 2 * n - 2 * i;
    for(int j = 1; j <= i; j++)
        cout << "*";
    for(int j = 1; j <= blank; j++)
        cout << " ";
    for(int j = 1; j <= i; j++)
        cout << "*";
    cout << lb;  
}
for(int i = n; i >= 1; i--)
{
    int blank = 2 * (n - i);
    
    for(int j = 1; j <= i; j++)
        cout << "*";
    for(int j = 1; j <= blank; j++)
        cout << " ";
    for(int j = 1; j <= i; j++)
        cout << "*";
    
    cout << lb;

}
return 0;
}