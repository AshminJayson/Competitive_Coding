#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 


//Finding the subarrays that result in an even number 
int subs(vector <char> a)
{
    int counter = 0;
    for(int i = 0; i < a.size(); i++)
    {
        string s;
        s.push_back(a[i]);
        for(int j = i + 1; j < a.size(); j++)
        {
            s.push_back(a[j]);
            if(s.length() > 1 && count(s.begin(),s.end(), '0') != s.length() && s[s.length()-1] == '0')
                counter++;      
        }
    }

    return counter;
}

//Driver Program
int main()
{

IO;
start(){
int n;
cin >> n;
vector <char> a(n);
for(auto &x : a)
    cin >> x;

cout << subs(a) << lb;
}
return 0;
}

