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

lli findpos(set <lli> &s, lli pos)
{
    set <lli> :: iterator it;
    it = s.upper_bound(pos);
    it--;
    return *it;
}


void solution()
{
    lli n, q; cin >> n >> q;
    vector <lli> a(n + 1); 
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    set <lli> s;
    s.insert(1);
    for(int i = 2; i <= n; i++)
        if(a[i] % a[i - 1] != 0)
            s.insert(i);

    while(q--)
    {
        lli type, index;
        cin >> type >> index;
        if(type == 1)
        {
            cin >> a[index];

            if(index > 1)
            {
                if(findpos(s, index) == index && a[index] % a[index - 1] == 0)
                    s.erase(index);
                else if(findpos(s, index) < index && a[index] % a[index - 1] != 0)
                    s.insert(index);
            }   
            
            if(index < n)
            {
                if(findpos(s, index + 1) > index && a[index + 1] % a[index] == 0)
                    s.erase(index + 1);
                if(findpos(s, index + 1) <= index && a[index + 1] % a[index] != 0)
                    s.insert(index + 1);
                
            }
        }
        else if(type != 1)
            cout << findpos(s, index) << lb;
    }



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