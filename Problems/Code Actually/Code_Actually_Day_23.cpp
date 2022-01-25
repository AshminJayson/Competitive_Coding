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
    vector <pair<int,int>> cood(4);

    int lpx = INT_MAX;
    int lpy = INT_MAX;
    int lowpi = -1;

    for(int i = 0; i < 4; i++)
    {
        cin >> cood[i].first >> cood[i].second;

        if(lpx > cood[i].first)
        {
            lpx = cood[i].first;
            lpy = cood[i].second;
            lowpi = i;
        }
        else if(lpx == cood[i].first)
        {
            if(cood[i].second < lpy)
            {
                lpy = cood[i].second;
                lowpi = i;
            }
                    
        }
    }

    bool f1 = false,f2 = false;
    int s1 = -1,s2 = -1;

    for(int i = 0; i < 4; i++)
    {
        if(i == lowpi)
        continue;

        if(lpy == cood[i].second && cood[i].first != lpx)
        {
            f1 = true;
            s1 = i;

        }

        if(lpx == cood[i].first && cood[i].second != lpy)
        {
            f2 = true;
            s2 = i;
        }

        
    }

    bool fbool = false;
    for(int i = 0; i < 4; i++)
    {
        if(i != lowpi && i!= s1 && i != s2)
        {
            if(cood[i].second == cood[s2].second && cood[i].first == cood[s1].first)
            fbool = true;
        }
    }

    if(f1 && f2 && fbool)
    cout << "YES\n";
    else
    cout << "NO\n";
}
 
return 0;
}