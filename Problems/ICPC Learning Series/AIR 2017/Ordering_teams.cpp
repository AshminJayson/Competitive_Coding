#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define test cout << "Working\n"

bool is_better(vector <int> a, vector<int> b)
{
    bool cond = false;
    bool more = false;
    bool c1 = false;
    bool c2 = false;
    bool c3 = false;

    if(a[0] >= b[0])
    {
        c1 = true;
        if(a[0] > b[0])
            more = true;
    }
    if(a[1] >= b[1])
    { 
        c2 = true;
        if(a[1] > b[1])
            more = true;
    }
    if(a[2] >= b[2])
    {
        c3 = true;
        if(a[2] > b[2])
            more = true;
    }

    if(c1 && c2 && c3 && more)
        cond = true;

    return cond;
}
int main()
{

IO;
start(){

vector <int> a(3);
vector <int> b(3);
vector <int> c(3);

for(auto &x : a)
    cin >> x;
for(auto &x : b)
    cin >> x;
for(auto &x : c)
    cin >> x;

vector <int> order(6);
order[0] = is_better(a, b);
order[1] = is_better(b, a);
order[2] = is_better(a, c);
order[3] = is_better(c, a);
order[4] = is_better(b, c);
order[5] = is_better(c, b);

bool final = false;

if(order[0] && (order[4] || order[3]))
    final = true;
if(order[1] && (order[5] || order[2]))
    final = true;
if(order[2] && (order[1] || order[5]))
    final = true;
if(order[3] && (order[0] || order[4]))   
    final = true;
if(order[4] && (order[0] || order[3]))
    final = true;
if(order[5] && (order[1] || order[2]))
    final = true;


if(final)
cout << "yes\n";
else
cout << "no\n";


}
return 0;
}