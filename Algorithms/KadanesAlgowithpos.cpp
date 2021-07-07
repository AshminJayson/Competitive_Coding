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
vector <int> a(n);

for(auto &x : a)  
    cin >> x;

int start = 0, stemp = 0, end = 0, max_sum = a[0], curr_sum = a[0];

for(int i = 1; i < n; i++)
{

    if(a[i] > curr_sum + a[i])
    stemp = i;
    
    curr_sum = max(a[i], curr_sum + a[i]); 

    if(curr_sum > max_sum)
    {
        start = stemp;
        end  = i;
    }    
    
    max_sum = max(curr_sum, max_sum);
}

cout << max_sum << start << end << "\n"; 
}
return 0;
}       

