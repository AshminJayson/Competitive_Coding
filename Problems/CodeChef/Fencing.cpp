#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
//start_of_debug
template <class T>
void _vals(T a){cerr << a << " ";}
template <class T>
void _vals(vector <T> a){
 cerr << " [ ";
 for(auto i : a)
  cerr << i << " ";
 cerr << "] ";
}
template <class T, class V>
void _vals(map <T, V> a){
 cerr << " [";
 for(auto i : a)
  cerr << " [ " << i.first << " , " << i.second << " ] ";
 cerr << "] ";
}
template <class T, class V>
void _vals(vector <pair < T, V>> a)
{
cerr << " [";
for(auto i : a)
cerr << " [ " << i.first << " , " << i.second << " ] ";
cerr << "] ";
}
#ifndef ONLINE_JUDGE
  #define debug(x) cerr << #x << " "; _vals(x); cerr << "\n"
#else
  #define debug(x)
#endif
#define test cout << "Working\n"
//end_of_debug
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define pb push_back

void solution()
{
    int n, m, k; cin >> n >> m >> k;
    vector <pair <lli, lli>> p(k); for(auto &x : p) cin >> x.first >> x.second;
    map <pair<lli,lli>, lli> f;
    for(int i = 0; i < k; i++)
        f[{p[i].first, p[i].second}] = 1;

    lli fences = 4 * k;
    for(int i = 0; i < k; i++)
    {
        int x = p[i].first, y = p[i].second;
        if(f[{x + 1, y}] == 1)fences--;
        if(f[{x - 1, y}] == 1)fences--;
        if(f[{x, y - 1}] == 1)fences--;
        if(f[{x, y + 1}] == 1)fences--;
    }

    cout << fences << lb;
}
int main()
{

 #ifndef ONLINE_JUDGE
   freopen("error.txt", "w", stderr);
 #endif
IO;
start()
 solution();
return 0;
}