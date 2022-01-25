#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x; cin >> x; while(x--)
#define ll long long int
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
start(t)
{
    string a, b;
    cin >> a >> b;
    int aones = 0, bones = 0, bzeroes = 0, azeroes = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '1')
        aones++;
        else 
        azeroes++;

        if(b[i] == '1')
        bones++;
        else
        bzeroes++;
    }
    int count = 0;
    if(aones != bones || azeroes != bzeroes)
    {
        cout << -1 << "\n";
        continue;
    }
    else
    {
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] != b[i])
            count++;
        }
    }

    cout << count/2 << "\n";
    
}
return 0;
}