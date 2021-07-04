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

int n, k, odds = 0;
cin >> n >> k;
vector <int> a(n);
for(auto &x : a)
    cin >> x;
// ENd of Input

lli ops = 0;
for(auto &x : a)
{
    if(x & 1)
    {
        odds++;
        x--;
    }
}

ops += ceil((float)odds / k);

sort(a.begin(), a.end());

int i = 1;

bool flag = true;
while(flag)
{
    int t = pow(2, i++);
    int temp = 0;
    int c1 = t & -t;

    for(int j = 0; j < a.size(); j++)
    {

        int c2 = a[j] & -a[j];
        if(c1 == c2)
        {
            temp++;
            a[j] = a[j] - t;
        }

        if(a[j] == 0)
        {
            a.erase(a.begin() + j);
            j--;
        }
    }

    if(a.size() == 0)
        flag = false;

    ops += ceil((float)temp / k);
}

    cout << ops << lb;
}
return 0;
}