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
    int n, x, y; cin >> n >> x >> y;
    vector <pair <lli, lli>> cont(n);
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        cont[i] = {a, b};
    }
    vector <lli > v(x), w(y);
    for(auto &x : v) cin >> x;
    for(auto &x : w) cin >> x;
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    sort(cont.begin(), cont.end());

    lli shole = INT_MAX;
    for(auto x : cont)
    {
        vector <lli> :: iterator less, great;
        less = upper_bound(v.begin(), v.end(), x.first);
        less--;
        great = lower_bound(w.begin(),w.end(), x.second);
        if(*great < *less)
            continue;
        debug(*great);
        debug(*less);
        shole = min(shole, *great - *less + 1);
    }

    cout << shole << lb;

    debug(cont); debug(v); debug(w);
    

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