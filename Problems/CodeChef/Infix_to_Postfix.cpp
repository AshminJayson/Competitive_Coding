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

int precedence(char a)
{
    if(a == '+' || a == '-')
        return 1;
    else if(a == '*' || a == '/')
        return 2;
    else    
        return 3;
}

void solution()
{
 
    int n; cin >> n;
    string s; cin >> s;
    stack <char> converter;
    
    for(int i = 0; i < s.length(); i++)
    {
        debug(i);
        if(isalpha(s[i]))
            cout << s[i];
        else if(s[i] == '(')
            converter.push(s[i]);
        else if(s[i] != ')')
        {
            if(converter.empty() || precedence(s[i]) > precedence(converter.top()))
                converter.push(s[i]);
            else{
            while(!converter.empty() && converter.top() != '(' && precedence(s[i]) <= precedence(converter.top()))
            {
                cout << converter.top();
                converter.pop();
            }
            converter.push(s[i]);
            }
        }
        else
        {
            while(!converter.empty() && converter.top() != '(')
            {
                cout << converter.top();
                converter.pop();
            }
            converter.pop();
        }
    }

    while(!converter.empty())
    {
        cout << converter.top();
        converter.pop();
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