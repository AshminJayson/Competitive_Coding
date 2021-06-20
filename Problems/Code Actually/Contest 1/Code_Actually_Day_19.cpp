#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;
    
    int r;
    cin >> r;
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;

    
    while(r--)
    {
        string temp;
        cin >> temp;
        
        int sp = 0, ap = 0;

        for(int i = 0; i < temp.length(); i++)
        {
            bool flag = false;
            for(int j = 0; j < s.length(); j++)
            {
                if(temp[i] == s[j])
                {
                  flag = true;
                  break;  
                }
            }

            if(flag)
            sp += x;
            else
            ap += y;

    
        }



        if(sp > ap)
        cout << "SARTHAK\n";
        else if(ap > sp)
        cout << "ANURADHA\n";
        else
        cout << "DRAW\n";
            
    }

 
return 0;
}