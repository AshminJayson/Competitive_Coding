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
    cout << s;
    int a = s.length();

    if(a < 4)
    {
        cout << "Error" << lb;
        continue;
    }

    bool t1 = false, t2 = true, t3 = false;

    if(s[0] == '<')
    {
        if(s[a - 1] = '>')
        {
            if(s[1] == '/')
            t1 = true;
        }
    }

    if(!t1)
    {
        cout << "Error" << lb;
        continue;
    }

    for(int i = 2; i <= a-2; i++)
    {
        if(isdigit(s[i]) || (int)s[i] >= 97 && (int)s[i] <= 122)
        {
            t3 = true;
            continue;
        }
        
        if((int)s[i] < 97 || (int)s[i] > 122)
        {
            t2 = false;
            break;

        }
    }


    if(t1 && t2 && t3)
    cout << "Success" << lb;
    else
    cout << "Error" << lb;
}
 
return 0;
}
