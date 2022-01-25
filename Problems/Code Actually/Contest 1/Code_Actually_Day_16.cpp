#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
#define start() int x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector <string> lx;

void permute(string s, string sub)
{
    if(s.length() == 0)
    {
        lx.push_back(sub);
        return;
    }

        for(int i = 0; i < s.length(); i++)
        {
            char fix = s[i];
            string on_left = s.substr(0, i);
            string on_right = s.substr(i + 1);
            string rem = on_left + on_right;
            string temp = sub + fix;
            permute(rem, temp);
        }

}


int main()
{

IO;
string s;
cin >> s;

string sub;

permute(s, sub);

sort(lx.begin(),lx.end());
for(int i = 0; i < lx.size(); i++)
cout << lx[i] << "\n";
return 0;
}



