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

lli mul(lli a, lli b){ return (a * b) % MOD;}

void solution()
{
    lli n, k; cin >> n >> k;
    vector <lli> a(n); for(auto &x : a) cin >> x;

    stack <pair <lli, lli>> list;
    vector <lli> pos(n, -1);

    for(int i = 0; i < n; i++)
    {
      while(!list.empty() && list.top().first > a[i])
      {
        pos[list.top().second] = i;
        list.pop();
      }

      list.push({a[i], i});
    }
    debug(pos);
    lli total = 1;
    for(int i = 0; i < n; i++)
    {
      debug(total);
      if(pos[i] != -1)
        total = mul(total, pos[i] - i + 1);
    }

    cout << total << lb;
}
int main()
{

 #ifndef ONLINE_JUDGE
   freopen("error.txt", "w", stderr);
 #endif
IO;
 solution();
return 0;
}