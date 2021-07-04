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
string s;
cin >> s;
map <char, int> a;
for(int i = 0; i < s.length(); i++)
    a[s[i]]++;

bool alt = false;
if(s.length() == 1)
{
    cout << "WIN\n";
    alt = true;
}
else
{
    for(auto &x : a)
    {
        bool flag = true;
        x.second--;
        int temp = x.second;
        for(auto y : a)
        { 
            if(temp == 0 && y.second != 0)
                temp = y.second;

            // cout << temp << lb;
            if(y.second != temp && y.second != 0)
            {
                // cout << x.first << " " << y.first <<  y.second << " " << temp << lb;
                flag = false;
                continue;
            }
        }
        
        if(flag)
        {
            cout << "WIN\n";
            alt = true;
            break;
        }

        x.second++;   
    }
}

if(!alt)
cout << "LOSE\n";
return 0;
}