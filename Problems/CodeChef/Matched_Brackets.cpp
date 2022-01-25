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
    vector <int> brackets(n);
    for(auto &x : brackets)
        cin >> x;
    
    int max_depth = 0, curr_depth = 0, max_dpos = 1, curr_dpos = 1;
    int max_length = 0, curr_length = 0, max_lpos = 1,  curr_lpos = 1;

    for(int i = 0; i < brackets.size(); i++)
    {
        curr_length++;

        if(curr_length == 1)
            curr_lpos = i + 1;

        if(brackets[i] == 1){
            curr_depth++;
            curr_dpos = i + 1;
        }
        else{ 
            if(max_depth < curr_depth){
                max_depth = curr_depth;
                max_dpos = curr_dpos;
            }
            curr_depth--;
            // debug(curr_depth);
            debug(i);
            debug(curr_length);
            if(curr_depth == 0){
                
                if(max_length < curr_length)
                {
                    max_length = curr_length;
                    max_lpos = curr_lpos;
                }
                
                curr_length = 0;
                
            }
        }



    }

    cout << max_depth << " " << max_dpos << " " << max_length << " " << max_lpos << " \n";
}
int main()
{

IO;
 solution();
return 0;
}