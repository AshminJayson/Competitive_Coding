#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cout<<"hello world";
vector <string> words[5];
words[0].push_back("ecotype");
words[1].push_back("ecology");
words[2].push_back("ecocide");
words[3].push_back("ecotope");
words[4].push_back("ecotone");

for(auto x:words)cout<<x<<endl;



return 0;
}