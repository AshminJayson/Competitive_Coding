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
    cin>>ws;
    getline(cin,speech);
    getline(cin,change);
    getline(cin,rep);

    size_t it;
    it = speech.find(change, 0);
    while(it != string::npos)
    {   
        speech.replace(it, rep.length(), rep);
        it = speech.find(change, it + 1);
    }

    cout<<speech<<"\n";

}
return 0;
}