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
 
    int k, init, end;
    cin >> k >> init >> end;
    int temp = (init + end) % 10;
    string res = " ";
    
    if(k == 2)
        res = ((init + end) % 3 == 0) ? "YES" : "NO"; 
    else if(temp == 5 || temp == 10)
        res = "NO";
    else
    {
        int groups = (k - 3) / 4;
        int ungrouped = (k - 3) % 4;

        lli sum = groups * 20;
        sum += init + end + temp;

        for(int i = 0; i < ungrouped; i++)
        {
            temp = (2 * temp)%10;
            sum += temp; 
        }
        debug(sum);
        res = (sum % 3 == 0)? "YES" : "NO";
    }
    
    cout << res << lb;

}
int main()
{

IO;
start()
 solution();
return 0;
}