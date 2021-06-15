//This will replace all instances of the change string irrespective of whether it's a part of another word.
//Also when replacing the change string with a string longer or shorter than the length of the change string it will result in the overwriting of certain characters.
//So find a better alternative method that takes these factors into consideration.

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
