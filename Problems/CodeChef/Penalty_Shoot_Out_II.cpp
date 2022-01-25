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
 
    int n;
    cin >> n;
    string goals;
    cin >> goals;
    int teama = 0, teamb = 0;
    int teamaleft = n, teambleft = n;
    int shots = 0;
    for(; shots < goals.length(); shots++)
    {
        debug(shots);
        if(goals[shots] == '1')
            (shots % 2 == 0) ? teama++ : teamb++;

        (shots % 2 == 0) ? teamaleft-- : teambleft--;

        if(teama > teamb + teambleft){
            cout << shots + 1 << lb;
            return;
        }
        else if(teamb > teama + teamaleft){
            cout << shots + 1 << lb;
            return;
        }
    } 

    cout << 2 * n << lb;  

}
int main()
{

IO;
start()
 solution();
return 0;
}