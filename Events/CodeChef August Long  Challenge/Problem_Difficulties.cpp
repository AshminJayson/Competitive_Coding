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

    map <int, int> a;
    for(int i = 0; i < 4; i++)
    {
        int b;
        cin >> b;
        a[b]++;
    }

    if(a.size() == 1)
        cout << 0 << lb;
    else if(a.size() == 2){
        if(a.begin()->second == 1 || a.begin()->second == 3)
            cout << 1 << lb;
        else
            cout << 2 << lb;
    }
    else if(a.size() == 3)
        cout << 2 << lb;
    else
        cout << 2 << lb;

}
return 0;
}