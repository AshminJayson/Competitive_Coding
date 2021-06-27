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
int n;
cin >> n;

map <string,int> val;

n = 3 * n;
while(n--)
{
    string s;
    int x;
    cin >> s;
    cin >> x;

    val[s] += x;
}

vector <int> sols;

for(auto x : val)
{
    sols.push_back(x.second);
}

sort(sols.begin(), sols.end());

for(auto x : sols)
cout << x << " ";
 
cout << "\n";

}

return 0;
}