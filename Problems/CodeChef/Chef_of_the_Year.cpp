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
    lli n, m; cin >> n >> m;
    map <string, string> chefs;
    while(n--)
    {
        string a, b; cin >> a >> b;
        chefs[a] = b;
    }

    map <string, lli> chef, cnt;
    while(m--)
    {
        string a; cin >> a;
        chef[a]++;
        cnt[chefs[a]]++;
    }

    lli cntc = INT_MIN, chefc = INT_MIN;
    string cnts, chefss;
    map <string, lli> :: iterator it;
    it = cnt.end();
    
    while(it != cnt.begin())
    {
        it--;
        if(it -> second >= cntc)
        {
            cntc = it -> second;
            cnts = it -> first;
        }
    }

    it = chef.end();
    
    while(it != chef.begin())
    {
        it--;
        if(it -> second >= chefc)
        {
            chefc = it -> second;
            chefss = it -> first;
        }
    }

    cout << cnts << lb << chefss << lb;


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