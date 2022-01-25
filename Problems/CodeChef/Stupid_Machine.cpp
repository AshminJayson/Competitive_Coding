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

void solution()
{
 #ifndef ONLINE_JUDGE
   freopen("error.txt", "w", stderr);
 #endif
 
    lli n;
    cin >> n;
    vector <lli> box_size(n);
    for(auto &x : box_size)
        cin >> x;
    
    vector <lli> precomp(n, INT_MAX);
    precomp[0] = box_size[0];
    for(int i = 1; i < n; i++)
        precomp[i] = min(precomp[i - 1], box_size[i]);

    debug(precomp);

    lli currh = 0;
    lli total_tokens = 0;
    for(int i = n - 1; i >= 0; i--){
        total_tokens += (precomp[i] - currh) * (i + 1);
        currh = precomp[i];
    }

    cout << total_tokens << lb;

}
int main()
{

IO;
start()
 solution();
return 0;
}