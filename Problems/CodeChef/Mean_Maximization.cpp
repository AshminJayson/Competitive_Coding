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
    double n; cin >> n;
    vector <double> a(n); for(auto &x : a) cin >> x;

    vector <double> l(n), r(n);

    l[0] = a[0];
    for(double i = 1; i < n; i++)
    {
        double sum = l[i - 1] * i;
        sum = sum + a[i];
        l[i] = (double)sum / (i + 1);

    }
    

    r[n - 1] = a[n - 1];
    for(double i = n - 1; i >= 0; i--)
    {
        double sum = r[i + 1] * (double)(n - i - 1);
        sum = sum + a[i];
        r[i] = (double)sum / (n - i);
    }
    
    debug(l);
    debug(r);


    double max_val = INT_MIN;
    for(int i = 0; i < n - 1; i++)
    {
        max_val = max(max_val, l[i] + r[i + 1]);
    }

    cout << max_val << lb;
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