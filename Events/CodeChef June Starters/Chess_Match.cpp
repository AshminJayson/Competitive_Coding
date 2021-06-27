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
start(){
int n, a, b;
cin >> n >> a >> b;
int s = 2 * (180 + n);
int l = b + a;
cout << s - l << "\n";
 
}
return 0;
}