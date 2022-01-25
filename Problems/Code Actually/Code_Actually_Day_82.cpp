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
 
    int n; cin >> n;
    string s, t; cin >> s >> t;

    vector <int> diff;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != t[i])
            diff.push_back(i);
    }

    debug(diff);
    if(diff.size() != 2)
        cout << "No";
    else
    {
        if(s[diff[0]] == s[diff[1]] && t[diff[0]] == t[diff[1]])
            cout << "Yes";
        else
            cout << "No";
    }

    cout << lb;
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