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
    lli width = 10000, height = 400;
    lli n; cin >> n;
    vector <pair <lli, lli>> p(n); for(auto &x : p) cin >> x.first >> x.second;
    sort(p.begin(), p.end());

    stack <pair <lli, lli>> st;
    vector <lli> rp(n), lp(n);

    int i = 0;
    while(i < n)
    {
        while(!st.empty() && p[i].second < st.top().first)
        {
            rp[st.top().second] = p[i].first;
            st.pop();
        }
        st.push({p[i].second, i});
        i++;
    }

    while(!st.empty())
    {
        rp[st.top().second] = width;
        st.pop(); 
    }

    i = n - 1;
    while(i >= 0)
    {
        while(!st.empty() && p[i].second < st.top().first)
        {
            lp[st.top().second] = p[i].first;
            st.pop();
        }
        st.push({p[i].second, i});
        i--;
    }

    while(!st.empty())
    {
        lp[st.top().second] = 0;
        st.pop(); 
    }

    lli area = 0;

    for(int i = 0; i < n; i++)
        area = max(area, (rp[i] - lp[i]) * p[i].second);

    area = max(area, height * p[0].first);
    area = max(area, height * (width - p[n -1].first));
    for(int i = 1; i < n - 1; i++)
        area = max(area, height * (p[i + 1].first - p[i].first));

    cout << area << lb;


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