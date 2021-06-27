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
start()
{
    string s;
    cin >> s;


    if(s[0] == '1')
    cout << "1" << "0" + s.substr(1) << lb;
    else
    cout << "1" + s << lb;



}
 
return 0;
}