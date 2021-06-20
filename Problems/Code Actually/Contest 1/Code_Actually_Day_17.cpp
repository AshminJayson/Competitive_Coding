#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
start()
{
    int l;
    cin >> l;
    string s;
    cin >> s;

    int len = 0;

    for(int i = 0; i < s.length(); i++)
    {   int temp = 0;
        for(int j = i; j < s.length() - 1; j++)
        {
            if(s[j] + 1 == s[j + 1])
        {
            temp++;
        }
        else
        break;
        }

        len = max(temp, len);
    }

    cout << len + 1 << "\n";
}
 
return 0;
}