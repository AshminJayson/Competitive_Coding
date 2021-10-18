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
  _vals(i);
 cerr << "] ";
}
template <class T, class V>
void _vals(map <T, V> a){
 cerr << " [";
 for(auto i : a)
{
  cerr << " [ ";  _vals(i.first); cerr << ", "; _vals(i.second); cerr << "] ";
}
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
    int temp = n;
    int i = 0;
    vector <pair <int, int>> list;
    vector <int> vals(n);

    while(n--)
    {
        int x;
        cin >> x;
        list.push_back(make_pair(x, i));
        i++;
    }

    sort(list.begin(), list.end());

    i = 0;
    int prev = -1;

    for(int j = 0; j < temp; j++)
    {
        if(i < list[j].first - 1 && j != 0)
            i++;

        vals[list[j].second] = i;
        prev = list[j].first;
		debug(prev);
    }

    for(auto v : vals)
        cout << v << " ";
    
    cout << lb;
}
int main()
{

IO;
start(){
 solution();
}
return 0;
}

