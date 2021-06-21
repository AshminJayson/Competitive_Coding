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
    int n;
    cin >> n;

    vector <int> q(n + 1);
    map <int, int> times;
    
    int count = 0;
    for(int i = 1; i < n + 1; i++)
    {
        cin >> q[i];

    }

    for(int i = 1; i < n + 1; i++)
    {   
        if(times.size() == 7)
        {
            break;
        }
        if(q[i] > 0 && q[i] < 8)
        {
            times[q[i]]++;
        }
        count ++;
    }

    cout << count << "\n";


}
 
return 0;
}