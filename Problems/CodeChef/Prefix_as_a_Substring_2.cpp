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

vector <int> zarray(string s)
{
    int n = s.length();
    vector <int> z(n);

    int l = 0, r = 0;
    for(int i = 1; i < n; i++)
    {
        if(i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        
        while(i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;
        
        if(z[i] + i - 1 > r)
            l = i, r = z[i] + i - 1;
    }

    return z;
}

vector <int> pitable(string s)
{
    int n = s.length();
    vector <int> pi(n);

    for(int i = 1; i < n; i++)
    {
        int j = pi[i - 1];

        while(j > 0 && s[i] != s[j])
            j = pi[j - 1];

        if(s[i] == s[j])
            j++;

        pi[i] = j;
    }

    return pi;
}

void solution()
{
    string s1, s2, x; cin >> s1 >> s2 >> x;
    vector <int> pi = pitable(s1 + '#' + x);
    vector <int> z = zarray(s2 + '#' + x);

    int n = x.length();
    vector <lli> p1(n), p2(n);

    for(int i = 0; i < n; i++)
        p1[i] = pi[s1.length() + 1 + i];
    for(int i = 0; i < n; i++)
        p2[i] = z[s2.length() + 1 + i];
    

    vector <lli> longest(s1.length() + 1);

    for(int i = 0; i < n; i++)
    {
        lli prefix_length = p1[i];
        lli suffix_length = 0;
        if(i + 1 < n)
            suffix_length = p2[i + 1];

        longest[prefix_length] = max(longest[prefix_length], suffix_length);
    }

    debug(longest);

    vector <int> pis1 = pitable(s1);
    for(int i = longest.size() - 1; i > 0; i--)
    {
        lli max_so_far = longest[i];

        lli next = pis1[i - 1];
        longest[next] = max((lli)longest[next], max_so_far);
    }

    lli count = 0;
    for(int i = 1; i < longest.size(); i++)
        count += longest[i];

    lli max_prefix_s1 = 0, max_prefix_s2 = 0;
    for(int i = 0; i < n; i++)
    {
        max_prefix_s1 = max((lli)p1[i], max_prefix_s1);
        max_prefix_s2 = max((lli)p2[i], max_prefix_s2);
    }
    debug(count);
    cout << count + max_prefix_s2 + max_prefix_s1 + 1 << lb;

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