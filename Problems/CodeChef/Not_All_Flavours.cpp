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
 
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(auto &x : a)
        cin >> x;
    
    int max_length = INT_MIN;

    // for(int i = 0; i < n; i++)
    // {
    //     map <int, int> b;   
    //     for(int j = i; j < n; j++)
    //     {
    //         b[a[j]]++;
    //         if(b.size() == k)
    //         {
    //             max_length = max(max_length, j - i);
    //             break;
    //         }
    //     }
    //     if(b.size() != k)
    //         max_length = max(max_length, n - i);
        
    // }

    vector <int> popper;
    map <int, int> b;

    for(int i = 0, j = 0; i < n, j < n; )
    {
        debug(popper);
        debug(b);
        debug(i);
        debug(j);
        if(b.size() == k){
          max_length = max(max_length, (int)popper.size());
          
          b[a[i]]--;
          if(b[a[i]] <= 0)
            b.erase(a[i]);

          i++;
          popper.erase(popper.begin());
        }
        else{
          b[a[j]]++;
          if(b.size() != k){
            popper.pb(a[j]);
            j++;
          }
          else
            b[a[j]]--;
        }
    }

    max_length = max(max_length, (int)popper.size());
    cout << max_length << lb;
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