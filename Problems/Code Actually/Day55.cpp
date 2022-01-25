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

string s, t;
cin >> s >> t;

int n = s.length();
int m = t.length();
int max_size = 0;

vector <vector <int>> dp(n + 1, vector <int> (m + 1,0));

for(int i = n - 1; i >= 0; i--)
{
    for(int j = m - 1; j >= 0; j--)
    {
        if(s[i] == t[j])
            dp[i][j] = dp[i + 1][j + 1] + 1;
        
        max_size = max(dp[i][j], max_size);
    }
}

cout <<  max_size << "\n";
 
}
return 0;
}