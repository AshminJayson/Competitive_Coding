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

    string s;
    cin >> s;
    int packets = 0;
    for(int i = 0; i < s.length(); i++)   
    {
        if(s[i] == '1')
        {
            packets++;
            int j = i + 1;
            while(s[i] == s[j] && j < s.length())
                j++;
            
            i = --j;
        }
    }

    cout << packets << lb;
 
}
return 0;
}