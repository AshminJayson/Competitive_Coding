#include <bits/stdc++.h>
 
using namespace std;
 
#define start(x) int x;cin>>x;while(x--)
#define ll long long int
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{

IO;
start(t)
{
    string speech, change, rep;
    getline(cin,speech);
    getline(cin,change);
    getline(cin,rep);

    string :: iterator it;
    it = find(speech.begin(), speech.end(), change);
    while(it!=speech.end())
    {
        speech.replace(it, it+1, rep);
        it = find(it+1, speech.end(), change);
    }

    cout<<speech<<"\n";

}
 
return 0;
}