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
    lli n, m; cin >> n; cin >> m;
    vector <pair <lli, lli>> a(n), b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    debug(a); debug(b);

    for(int i = 0; i < m; i++)
        cout << a[0].second << " " << b[i].second << lb;
    for(int i = 1; i < n; i++)
        cout << a[i].second << " " << b[m - 1].second << lb;


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