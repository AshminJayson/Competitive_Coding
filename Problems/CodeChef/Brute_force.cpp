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

    int n;
    cin >> n;
    vector <int> a(n);

    for(auto &x : a)
        cin >> x;

    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        int t1 = a[i];
        for(int j = i + 1; j < n; j++)
        {
            int t2 = a[j];
            int c = t1 ^ t2;
            if(c > max(t1,t2))
                counter++;
        }
    }

    cout << counter << lb;
}
return 0;
}