#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 

// vector <datatype> vectorname(sizeofvector);

vector <string> words;

void permute(string s, int l)
{
    if(l == s.length())
    {
        words.push_back(s);
    }
    else{
        for(int i = l; i < s.length(); i++)
        {
            swap(s[i], s[l]);
            permute(s, l + 1);
            swap(s[i], s[l]); 
        }
    }
}

int main()
{

string s;
cin >> s;
int l = 0;
permute(s, l);
sort(words.begin(), words.end()); 

for(auto x : words)
    cout << x << "\n";

return 0;
}