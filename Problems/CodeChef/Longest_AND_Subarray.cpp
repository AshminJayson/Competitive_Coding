#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"
#define pb push_back

void solution()
{
int n;
cin >> n;
lli val;
if(n <= 2)
    val = 1;
else{
double root = log(n) / log(2);
lli back = root;

// cout << back << lb;
val = n - pow(2, back) + 1;

if(back == root)
    val = n - pow(2, back - 1);

lli rev_set = pow(2, back) - pow(2, back - 1);

val = max(rev_set, val);
}


cout << val << lb;
    

}

int main()
{

IO;
start(){

solution();

}
return 0;
}