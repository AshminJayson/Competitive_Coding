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
 
    int acts;
    string orgin;
    cin >> acts;
    cin >> orgin;
    lli total = 0;
    while(acts--)
    {
        string act;
        cin >> act;
        if(act == "TOP_CONTRIBUTOR"){
            total += 300;
            continue;
        }
        else if(act == "CONTEST_HOSTED"){
            total += 50;
            continue;
        }

        int rop;
        cin >> rop;

        if(act == "CONTEST_WON")
        {
                total += 300;
                if(rop < 20)
                    total += 20 - rop;
        }
        else
            total += rop;
    }

    int redmonths;
    if(orgin == "INDIAN")
        redmonths = total / 200;
    else    
        redmonths = total / 400;

    cout << redmonths << lb;

}
int main()
{

IO;
start()
 solution();
return 0;
}