#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

IO;

    int n, q;
    cin >> n >> q;
    vector <int> roots(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> roots[i];
    }

    sort(roots.begin(), roots.end(), greater <int> ());

    while(q--)
    {
        int x;
        cin >> x;
        
        int jump = sqrt(n), i = 0;
        while(i + jump < n && roots[i + jump] > x)i = i + jump;
        while(i < n && roots[i] > x)i++;

        if(x == roots[i])
        cout << "0\n";
        else if(i % 2 == 0)
        cout << "POSITIVE\n";
        else
        cout << "NEGATIVE\n";
        
    }

return 0;
}