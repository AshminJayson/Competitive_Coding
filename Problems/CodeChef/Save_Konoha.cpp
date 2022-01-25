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
    lli n, z; cin >> n >> z;
    map <lli, lli> s;
    while(n--)
    {
        int x; cin >> x;
        s[x]++;
    }

    map <lli, lli> :: iterator it;
    lli min_att = 0;
    while(!s.empty())
    {
        it = s.end();
        it--;
        debug(it->first);
        z -= it->first;
        min_att++;
        debug(z);
        if(z <= 0)
            break;
        
        if((it->first)/2 != 0)
            s[(it->first)/2]++;
        
        s[it->first]--;
        if(s[it->first] == 0)
            s.erase(it);
        debug(s);       
            
    }

    if(z > 0)
        cout << "Evacuate" << lb;
    else
        cout << min_att << lb;
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