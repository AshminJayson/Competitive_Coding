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
vector <lli> a(n);

for(auto &x : a)
    cin >> x;

lli max_sum = INT_MIN, curr_sum = INT_MIN;

for(auto x : a)
{
    curr_sum = max(x, curr_sum + x);
    max_sum = max(curr_sum, max_sum);
}
 
/* Alternate Method
int max_sum = INT_MIN, m = 0;
for(x : a)
{
  m += x;
  max_sum = max(m, max_sum);
  m = max(m, 0);
}*/
 
cout << max_sum;

}
return 0;
}
