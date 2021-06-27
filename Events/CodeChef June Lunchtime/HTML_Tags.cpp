#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 

int main()
{


start()
{
    string s;
    cin >> s;
    int a = s.length();

    if(a < 4)
    {
        cout << "Error" << lb;
        continue;
    }

    bool t1 = false, t2 = true, t3 = false;

    if(s[0] == '<' && s[1] == '/' && s[s.length() - 1] == '>')
    {
        int i = 2;
        for(; i <= a-2; i++)
        {
        
            if((int)s[i] < 48 || (int)s[i] > 122)
            {
            cout << "Error" << lb;
            break;
                
            }
            else if((int)s[i] > 57 && (int)s[i] < 97)
            {
            cout << "Error" << lb;
            break;
            }
        }
            if(i == a - 1)
            cout << "Success" << lb;
 
    }
    else 
    cout << "Error" << lb;




}
 
return 0;
}
