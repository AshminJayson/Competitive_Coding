#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{

string s;
cin >> s;
vector <char> t;

for(int i = 0; i < s.length(); i++)
{
    char temp = s[i];
    temp = tolower(temp);
    if(temp != 'a' && temp != 'e' && temp != 'i' && temp != 'o' && temp != 'u')
    {
        t.push_back('.');
        t.push_back(temp);
    }

}
 
for(int i = 0; i < t.size(); i++)cout << t[i];
return 0;
}