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
int curr, gud, bad;
cin >> curr >> gud;
bad = curr - gud;

string y;
cin >> y;

if(gud >= bad)
cout << "HEAVEN" << " " << curr << lb;
else
{
    int i = 0;
    for(; i < y.length(); i++)
    {
        if(y[i] == '1')
            gud++;
        else
            bad++;
        
        if(gud >= bad)
        {
            cout << "HEAVEN" << " " << curr + i + 1 << lb;   
            break;
        }
    }

    if(i == y.length())
        cout << "HELL" << lb;
}

 
}
return 0;
}